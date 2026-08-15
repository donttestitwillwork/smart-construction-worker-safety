#pragma once
#include <Arduino.h>
#include <Wire.h>
#include <MPU6050.h>
#include <cmath>

// ---------------- MPU OBJECT ----------------
MPU6050 mpu;

// ---------------- INIT ----------------
void initMPU() {
  Wire.begin(21, 22);
  mpu.initialize();

  if (mpu.testConnection()) {
    Serial.println("MPU6050 Connected");
  } else {
    Serial.println("MPU6050 Failed");
  }
}

// ---------------- DUAL DETECTION (TEST VERSION) ----------------
bool detectAccident() {
  int16_t ax, ay, az;
  int16_t gx, gy, gz;

  mpu.getAcceleration(&ax, &ay, &az);
  mpu.getRotation(&gx, &gy, &gz);

  float accel = sqrt(ax * ax + ay * ay + az * az) / 16384.0;
  float gyro  = sqrt(gx * gx + gy * gy + gz * gz) / 131.0;

  Serial.print("Accel: ");
  Serial.println(accel);
  Serial.print("Gyro: ");
  Serial.println(gyro);

  // VERY SENSITIVE TEST MODE
  if (accel < 0.95) {
    Serial.println("⚠ TEST FALL DETECTED");
    return true;
  }

  if (accel > 1.30 || gyro > 15) {
    Serial.println("⚠ TEST IMPACT DETECTED");
    return true;
  }

  return false;
}