#include <Arduino.h>
#include <ESP8266WiFi.h>
#include "credentials.h" // Includes SSID and password
int x=1;
void setup()
{
  Serial.begin(115200);
  Serial.println();
  Serial.print("Connecting to WiFi: ");

  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.println(x);
    delay(500);
    x=x+1;
  }

  Serial.println("\nWiFi connected successfully!");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  Serial.println(WIFI_SSID);
}

void loop()
{
  Serial.println("Working...");
  delay(1000);
}
