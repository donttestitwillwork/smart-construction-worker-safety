const express = require("express");
const mysql = require("mysql2");
const cors = require("cors");
const app = express();
const PORT = 3000;
// ---------------- MIDDLEWARE ----------------
app.use(cors());
app.use(express.json());
// ---------------- DASHBOARD ----------------
app.use(express.static("public"));
// ---------------- DATABASE ----------------
const db = mysql.createConnection({
  host: "localhost",
  user: "root",
  password: "",
  database: "smart_helmet"
});

db.connect((err) => {

  if (err) {
    console.error("❌ Database connection failed:", err);
    return;
  }

  console.log("✅ Connected to MySQL");
});

// ---------------- INSERT DATA ----------------

app.post("/data", (req, res) => {

  const {
    accident_status,
    latitude,
    longitude
  } = req.body;

  const sql = `
    INSERT INTO helmet_data
    (accident_status, latitude, longitude)
    VALUES (?, ?, ?)
  `;

  db.query(
    sql,
    [accident_status, latitude, longitude],

    (err, result) => {

      if (err) {
        console.error("❌ Insert failed:", err);
        res.status(500).send("Error inserting data");
        return;
      }

      console.log("✅ Data inserted:", result.insertId);

      res.send("Data saved successfully");
    }
  );
});

// ---------------- GET DATA ----------------

app.get("/data", (req, res) => {

  const sql =
    "SELECT * FROM helmet_data ORDER BY created_at DESC LIMIT 100";

  db.query(sql, (err, results) => {

    if (err) {
      console.error("❌ Fetch failed:", err);
      res.status(500).send("Error fetching data");
      return;
    }

    res.json(results);
  });
});

// ---------------- START SERVER ----------------

app.listen(PORT, () => {

  console.log(
    `🚀 Server running on http://localhost:${PORT}`
  );
});