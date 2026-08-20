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

## 📁 Structure

```text
backend/
├── public/
│   └── Web Dashboard
├── package.json
├── package-lock.json
├── README.md
└── server.js