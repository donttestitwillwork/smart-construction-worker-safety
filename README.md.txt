# 🪖 Smart Construction Worker Safety Monitoring System

> A smart IoT-based safety monitoring system designed to improve construction worker safety by detecting accidents, tracking worker location in real time, and providing a centralized monitoring dashboard.

![Platform](https://img.shields.io/badge/Platform-ESP32-blue)
![Backend](https://img.shields.io/badge/Backend-Node.js-green)
![Database](https://img.shields.io/badge/Database-MySQL-orange)
![License](https://img.shields.io/badge/License-MIT-yellow)

---

# 📖 Overview

Construction sites are among the most hazardous work environments. This project aims to improve worker safety using an ESP32-powered smart helmet capable of detecting accidents and transmitting real-time data to a monitoring dashboard.

The system continuously monitors worker activity, detects possible accidents, records GPS coordinates, and sends alerts to a web dashboard where supervisors can monitor workers in real time.

---

# ✨ Features

- 🚨 Accident Detection
- 📍 Real-Time GPS Tracking
- 📊 Interactive Dashboard
- 📈 Live Charts and Statistics
- 🪖 Helmet Status Monitoring
- 🔊 Buzzer Alert System
- 🌐 REST API
- 💾 MySQL Database Integration

---

# 🛠 Hardware Components

| Component | Purpose |
|-----------|----------|
| ESP32 | Main microcontroller |
| MPU6050 | Accident/Fall detection |
| NEO-6M GPS | Real-time location |
| Hall Sensor | Helmet status detection |
| Buzzer | Audible alerts |

---

# 💻 Software Stack

## Firmware

- PlatformIO
- ESP32
- Arduino Framework

## Backend

- Node.js
- Express.js

## Database

- MySQL

## Dashboard

- HTML
- CSS
- JavaScript
- Chart.js
- Leaflet.js

---

# 🏗 System Architecture

```text
          Smart Helmet
 ┌────────────────────────────┐
 │ ESP32                      │
 │ MPU6050                    │
 │ GPS Module                 │
 │ Hall Sensor                │
 │ Buzzer                     │
 └─────────────┬──────────────┘
               │
               ▼
        Node.js REST API
               │
               ▼
          MySQL Database
               │
               ▼
      Web Monitoring Dashboard
```

---

# 📂 Project Structure

```text
Smart-Construction-Worker-Safety-Monitoring-System
│
├── firmware/
├── backend/
├── dashboard/
├── database/
├── docs/
├── images/
├── README.md
├── LICENSE
└── .gitignore
```

---

# 🚀 Installation

## Firmware

```bash
cd firmware
```

Open the project in PlatformIO and upload it to the ESP32.

---

## Backend

```bash
cd backend
npm install
npm start
```

---

## Database

Import the SQL file located inside the `database` folder.

---

## Dashboard

Open the dashboard in your browser after starting the backend server.

---

# 📸 Screenshots

## Dashboard

> Screenshots will be added here.

## GPS Tracking

> Screenshots will be added here.

## Accident Alerts

> Screenshots will be added here.

---

# 🔮 Future Improvements

- 📱 Android application
- 🔔 Push notifications
- ☁ Cloud deployment
- 🤖 AI-based accident prediction
- 📈 Advanced analytics

---

# 👨‍💻 Author

**Oussema Ayari**

- Embedded Systems Graduate
- Full-Stack Developer
- Android Developer
- IoT Enthusiast

---

# 📄 License

This project is licensed under the MIT License.