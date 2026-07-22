# Smart Weather Monitoring System

An IoT-based weather monitoring system developed using ESP32, DHT22, SSD1306 OLED, and ThingSpeak Cloud.

## Features

- Real-time temperature monitoring
- Real-time humidity monitoring
- SSD1306 OLED display
- Wi-Fi connectivity using ESP32
- Cloud data logging using ThingSpeak
- HTTP GET communication
- Live cloud dashboard
- Serial monitor debugging

---

## Hardware Used

- ESP32 Development Board
- DHT22 Temperature & Humidity Sensor
- SSD1306 OLED Display

---

## Software Used

- Arduino IDE
- Wokwi Simulator
- ThingSpeak Cloud
- ESP32 Arduino Core

---

## Working Principle

1. ESP32 connects to Wi-Fi.
2. Reads temperature and humidity from DHT22.
3. Displays readings on OLED.
4. Creates an HTTP GET request.
5. Uploads data to ThingSpeak.
6. ThingSpeak stores the data.
7. Live graphs are updated every 20 seconds.

---

## Project Architecture

Environment
↓
DHT22 Sensor
↓
ESP32
├── OLED Display
├── Serial Monitor
└── Wi-Fi
      ↓
HTTP GET Request
      ↓
ThingSpeak Cloud
      ↓
Live Dashboard

---

## Learning Outcomes

- ESP32 Programming
- Sensor Interfacing
- OLED Display
- Wi-Fi Communication
- HTTP Protocol
- ThingSpeak API
- IoT Cloud Integration
- Embedded Systems Programming

---

## Future Improvements

- Email Alerts
- Mobile Notifications
- MQTT Support
- Data Logging to SD Card
- Weather Forecast Integration

---

## Author

Hari Sahithi Chitrala
