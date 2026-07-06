# Phase 2 – OLED Display Progress

## Objective

Integrate an SSD1306 OLED display with the ESP32 to display temperature and humidity from the DHT22 sensor.

## Progress

### Completed

- Added SSD1306 OLED to Wokwi project
- Learned I²C communication
- Identified SDA and SCL pins
- Connected OLED to ESP32
- Initialized OLED in the code

### Pending

- Display temperature
- Display humidity
- Format OLED screen
- Verify display output

## I²C Connections

| OLED | ESP32 |
|-------|--------|
| VCC | 3V3 |
| GND | GND |
| SDA | GPIO 21 |
| SCL | GPIO 22 |
