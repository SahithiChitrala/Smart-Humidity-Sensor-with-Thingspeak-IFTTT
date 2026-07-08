# 🌦️ Smart Weather Monitoring System using ESP32

## 📖 Overview

The Smart Weather Monitoring System is an IoT-based embedded systems project that measures environmental temperature and humidity using a DHT22 sensor connected to an ESP32 microcontroller. The collected data will be displayed locally and later transmitted to cloud platforms for remote monitoring and analysis.

This project is being developed in multiple phases to understand embedded systems, sensor interfacing, communication protocols, and IoT technologies.

---

## 🎯 Objectives

* Measure real-time temperature and humidity
* Interface the DHT22 sensor with ESP32
* Display readings on the Serial Monitor
* Display readings on an OLED display
* Log sensor data for future analysis
* Upload data to ThingSpeak Cloud
* Generate notifications using IFTTT

---

## 🛠️ Hardware Components

* ESP32 Development Board
* DHT22 Temperature & Humidity Sensor
* SSD1306 OLED Display
* Breadboard
* Jumper Wires
* USB Cable

---

## 📚 Concepts Covered

### Embedded Systems

* ESP32 Architecture
* GPIO Configuration
* Digital Sensors

### Communication Protocols

* I²C
* SPI
* Wi-Fi

### IoT

* HTTP GET Requests
* JSON Data
* ThingSpeak
* IFTTT

---

## System Architecture

```text
        DHT22
          │
          ▼
      ESP32 DevKit
      ├──────────────┐
      ▼              ▼
 Serial Monitor   SSD1306 OLED
                       │
                       ▼
          (Future) ThingSpeak Cloud
                       │
                       ▼
               IFTTT Notifications
```

### Current Progress

- ✅ DHT22 Sensor Interfacing
- ✅ Temperature Reading
- ✅ Humidity Reading
- ✅ Serial Output
- ✅ OLED Hardware Integration
- ⏳ OLED Display Testing
- ⏳ ThingSpeak Integration
- ⏳ IFTTT Alerts

---

## 📂 Repository Structure

```text
smart-weather-monitoring-system/
│
├── README.md
├── sketch.ino
├── diagram.json
├── images/
└── docs/
```

---

## 📈 Current Status

Project initialization completed.

Currently working on:

* ESP32 setup
* DHT22 interfacing
* Understanding sensor communication

---

## 🎯 Learning Outcomes

Through this project, I aim to strengthen my understanding of:

* Embedded Systems
* ESP32 Programming
* Sensor Interfacing
* Digital Communication
* IoT Fundamentals
* Real-Time Monitoring Systems
