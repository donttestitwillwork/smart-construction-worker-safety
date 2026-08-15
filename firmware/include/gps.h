#pragma once
#include <Arduino.h>
#include <TinyGPS++.h>
TinyGPSPlus gps;
HardwareSerial gpsSerial(2); // UART2

double latitude = 0.0;
double longitude = 0.0;

// ---------------- INIT ----------------
void initGPS() {
  gpsSerial.begin(9600, SERIAL_8N1, 16, 17);
  Serial.println("*GPS Initialized");
}

// ---------------- UPDATE ----------------
void updateGPS() {
  while (gpsSerial.available()) {
    gps.encode(gpsSerial.read());
  }

  if (gps.location.isUpdated()) {
    latitude = gps.location.lat();
    longitude = gps.location.lng();

    Serial.print("📍 Lat: ");
    Serial.println(latitude, 6);
    Serial.print("📍 Lng: ");
    Serial.println(longitude, 6);
  }
}