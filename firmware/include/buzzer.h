#ifndef BUZZER_H
#define BUZZER_H

#include <Arduino.h>

#define BUZZER_PIN 25

void initBuzzer() {
    pinMode(BUZZER_PIN, OUTPUT);
}

void activateBuzzer() {
    digitalWrite(BUZZER_PIN, HIGH);
    Serial.println("BUZZER ON 🚨");
}

void deactivateBuzzer() {
    digitalWrite(BUZZER_PIN, LOW);
}

#endif