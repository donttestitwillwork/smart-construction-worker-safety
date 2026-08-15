#include <Arduino.h>
#include <WiFi.h>
#include <HTTPClient.h>
#include "accident.h"
#include "gps.h"
#include "buzzer.h"

// ---------------- WIFI ----------------
const char* ssid = "Infinix HOT 50";
const char* password = "panzer11";
// ---------------- BACKEND ----------------
const char* serverName = "http://10.144.255.128:3000/data";
// ---------------- VARIABLES ----------------
bool accidentDetected;
bool buzzerOn;
// ---------------- OPTIMIZATION ----------------
unsigned long lastSendTime = 0;
const int sendInterval = 10000;
bool lastAccident = false;
// ---------------- SEND TO SERVER ----------------
void sendToServer(bool accident, double lat, double lng) {

  if (WiFi.status() == WL_CONNECTED) {

    HTTPClient http;

    http.begin(serverName);
    http.addHeader("Content-Type", "application/json");

    String json = "{";
    json += "\"accident_status\":" + String(accident ? 1 : 0) + ",";
    json += "\"latitude\":" + String(lat, 6) + ",";
    json += "\"longitude\":" + String(lng, 6);
    json += "}";

    int response = http.POST(json);

    Serial.print("HTTP Response: ");
    Serial.println(response);

    http.end();
  }
}

// ---------------- SETUP ----------------

void setup() {

  Serial.begin(115200);

  initBuzzer();
  initMPU();
  initGPS();

  // WiFi
  WiFi.begin(ssid, password);

  Serial.print("Connecting to WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\n*Connected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  Serial.println("*SMART CONSTRUCTION WORKER SAFETY SYSTEM STARTED*");
}

// ---------------- LOOP ----------------

void loop() {

  // 1️⃣ Accident Detection
  accidentDetected = detectAccident();

  // 2️⃣ GPS
  updateGPS();

  // 3️⃣ Smart Data Sending
  unsigned long currentTime = millis();

  bool stateChanged =
    (accidentDetected != lastAccident);

  if (stateChanged ||
      (currentTime - lastSendTime > sendInterval)) {

    sendToServer(
      accidentDetected,
      latitude,
      longitude
    );

    lastSendTime = currentTime;
    lastAccident = accidentDetected;

    Serial.println("*Data sent to server");
  }

  // 4️⃣ Buzzer Logic

  buzzerOn = false;

  if (accidentDetected) {

    Serial.println("⚠ ACCIDENT DETECTED!");

    Serial.print("*GPS Latitude: ");
    Serial.println(latitude);

    Serial.print("*GPS Longitude: ");
    Serial.println(longitude);

    buzzerOn = true;
  }

  if (buzzerOn) {

    activateBuzzer();

  } else {

    deactivateBuzzer();

    Serial.println("*Worker Safe*");
  }
  Serial.println("-----------------------------");
  delay(1000);
}