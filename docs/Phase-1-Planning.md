# Phase 1 – Sensor Interfacing Planning

## Project

Smart Weather Monitoring System using ESP32

## Objective

Interface the DHT22 temperature and humidity sensor with the ESP32 and verify sensor readings through the Serial Monitor before integrating additional peripherals.

---

## Hardware Used

* ESP32 Development Board
* DHT22 Temperature & Humidity Sensor
* Breadboard
* Jumper Wires

---

## Wiring

| DHT22 Pin | ESP32 Pin |
| --------- | --------- |
| VCC       | 3V3       |
| DATA      | GPIO 4    |
| GND       | GND       |

---

## Concepts Learned

* Difference between analog and digital sensors
* ESP32 GPIO configuration
* DHT22 digital communication
* Importance of common ground
* Purpose of pull-up resistors
* Using external libraries for sensor communication

---

## Current Progress

* Repository created
* Project structure organized
* ESP32 project initialized in Wokwi
* DHT22 hardware connections completed
* Development environment configured

---

## Next Steps

* Read temperature from DHT22
* Read humidity from DHT22
* Display values on Serial Monitor
* Verify sensor readings
* Integrate OLED display

---

## Notes

This project is being developed step by step to understand the hardware, communication protocols, and embedded software rather than simply reproducing an existing implementation.
