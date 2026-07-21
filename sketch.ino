#include <WiFi.h>
#include <HTTPClient.h>

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define DHTPIN 4
#define DHTTYPE DHT22

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
DHT dht(DHTPIN, DHTTYPE);

// WiFi Credentials
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

// ThingSpeak
String apiKey = "YOUR_WRITE_API_KEY";
String serverName = "https://api.thingspeak.com/update?api_key=";

void setup() {

  Serial.begin(115200);

  dht.begin();

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED failed");
    while (true);
  }

  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setTextSize(1);

  // Connect WiFi
  WiFi.begin(ssid, password);

  Serial.print("Connecting to WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("WiFi Connected");

  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

}

void loop() {

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (isnan(temperature) || isnan(humidity)) {

    Serial.println("Failed to read DHT22");

    return;
  }

  // Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  // OLED Display
  display.clearDisplay();

  display.setCursor(0,0);
  display.println("Weather Monitor");

  display.setCursor(0,20);
  display.print("Temp : ");
  display.print(temperature);
  display.println(" C");

  display.setCursor(0,40);
  display.print("Hum  : ");
  display.print(humidity);
  display.println(" %");

  display.display();

  // Build URL
  String url = serverName +
               apiKey +
               "&field1=" + String(temperature) +
               "&field2=" + String(humidity);

  WiFiClient client;
  HTTPClient http;

  http.begin(client, url);

  int httpResponseCode = http.GET();

  Serial.print("HTTP Response Code: ");
  Serial.println(httpResponseCode);

  if (httpResponseCode == 200) {
    Serial.println("Data uploaded successfully!");
  } else {
    Serial.println("Upload failed.");
  }

  http.end();

  delay(20000);

}
