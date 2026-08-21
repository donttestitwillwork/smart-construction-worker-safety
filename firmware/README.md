# 🤖 Firmware

This directory contains the ESP32 firmware for the Smart Construction
Worker Safety Monitoring System.

The firmware collects information from the smart helmet sensors,
processes the data, and communicates with the backend server.

---

## 🔧 Hardware

The firmware is designed for an **ESP32 Dev Module** and uses:

| Component | Purpose |
|---|---|
| ESP32 | Main microcontroller |
| MPU6050 | Motion and accident detection |
| NEO-6M GPS | GPS location tracking |
| Hall Sensor | Helmet status detection |
| Buzzer | Local safety alert |

---

## 🛠️ Technologies

- C/C++
- ESP32
- PlatformIO
- Arduino framework
- I2C
- UART
- Wi-Fi

---

## 📁 Project Structure

```text
firmware/
└── SmartHelmet/
    ├── src/
    ├── include/
    ├── lib/
    ├── test/
    ├── platformio.ini
    └── ...