# 📚 Technical Documentation

This directory contains the technical documentation and diagrams for the
Smart Construction Worker Safety Monitoring System.

## 🏗️ System Architecture

The system combines an ESP32-based smart helmet, sensors, a Node.js
backend, MySQL database, and web dashboard.

![System Workflow](system-workflow.png)

## 🔧 Hardware Architecture

The smart helmet is built around an ESP32 and integrates the MPU6050,
NEO-6M GPS, Hall sensor, and buzzer.

![Project Schematic](project-schematic.jpg)

## 🔄 Activity Diagram

The activity diagram illustrates the main workflow of the system.

![Activity Diagram](activity-diagram.png)

## 👤 Use Case Diagram

The use case diagram presents the main interactions between the system
and its users.

![Use Case Diagram](use-case-diagram.png)

## 📡 Serial Communication Workflow

This diagram illustrates the communication workflow between the embedded
system and the backend.

![Serial Workflow](serial-workflow.png)# 📚 Technical Documentation

This directory contains the technical documentation and diagrams for the
Smart Construction Worker Safety Monitoring System.

## 🏗️ System Architecture

The system combines an ESP32-based smart helmet, sensors, a Node.js
backend, MySQL database, and web dashboard.

![System Workflow](system-workflow.png)

## 🔧 Hardware Architecture

The smart helmet is built around an ESP32 and integrates the MPU6050,
NEO-6M GPS, Hall sensor, and buzzer.

![Project Schematic](project-schematic.jpg)

## 🔄 Activity Diagram

The activity diagram illustrates the main workflow of the system.

![Activity Diagram](activity-diagram.png)

## 👤 Use Case Diagram

The use case diagram presents the main interactions between the system
and its users.

![Use Case Diagram](use-case-diagram.png)

## 📡 Serial Communication Workflow

This diagram illustrates the communication workflow between the embedded
system and the backend.

![Serial Workflow](serial-workflow.png)
# 📚 Project Documentation

This directory contains the technical documentation, diagrams, workflows,
and interface screenshots for the Smart Construction Worker Safety
Monitoring System.

---

## 🏗️ System Architecture

The system combines embedded hardware, wireless communication, a backend
server, database storage, and a web-based monitoring dashboard.

![Project Schematic](project-schematic.jpg)

### Main Components

```text
┌──────────────────────┐
│   Smart Helmet       │
│      ESP32           │
├──────────────────────┤
│ MPU6050              │
│ NEO-6M GPS           │
│ Hall Sensor          │
│ Buzzer               │
└──────────┬───────────┘
           │ Wi-Fi
           ▼
┌──────────────────────┐
│   Node.js Backend    │
│      Express         │
└──────────┬───────────┘
           │
           ▼
┌──────────────────────┐
│    MySQL Database    │
│    smart_helmet      │
└──────────┬───────────┘
           │
           ▼
┌──────────────────────┐
│   Web Dashboard      │
│ Maps • Charts • Alerts│
└──────────────────────┘