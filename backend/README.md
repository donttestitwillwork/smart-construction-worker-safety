# 🖥️ Backend

The backend is the communication layer of the Smart Construction Worker
Safety Monitoring System.

It receives data from the ESP32 smart helmet, stores the data in MySQL,
and provides data to the web dashboard.

---

## 🛠️ Technologies

- Node.js
- Express.js
- MySQL
- MySQL2
- CORS
- JavaScript

---

## 📁 Structure# 🖥️ Smart Helmet Backend

This directory contains the Node.js backend for the Smart Construction Worker
Safety Monitoring System.

The backend receives monitoring data from the ESP32 smart helmet, stores it
in MySQL, and provides the data to the web dashboard.

---

## 🛠️ Technologies

- Node.js
- Express.js
- MySQL
- mysql2
- CORS
- HTML / CSS / JavaScript

---

## 🏗️ Architecture

```text
ESP32 Smart Helmet
       │
       │ HTTP POST
       ▼
┌─────────────────────┐
│   Node.js Backend   │
│      Express.js     │
└──────────┬──────────┘
           │
           │ SQL
           ▼
┌─────────────────────┐
│   MySQL Database    │
│    smart_helmet     │
└──────────┬──────────┘
           │
           │ GET
           ▼
┌─────────────────────┐
│  Web Dashboard      │
│ Charts • Map • Alerts│
└─────────────────────┘

```text
backend/
├── public/
│   └── Web Dashboard
├── package.json
├── package-lock.json
├── README.md
└── server.js