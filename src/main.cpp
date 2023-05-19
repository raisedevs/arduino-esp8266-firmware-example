#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <RaiseDev.h>

#include "wifi_credentials.h"

bool was_wifi_connected_message_output = false;

void setup()
{
  // Set the serial port's baud-rate to the same as in platformio.ini
  Serial.begin(115200);

  // Start connection to (hardcoded) WiFi nextwork.
  Serial.println(String("WiFi connecting to ") + WIFI_SSID);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

  // Setup RaiseDev library.
  raiseDev.begin();
}

void loop()
{
  if (WiFi.status() == WL_CONNECTED)
  {
    // Only output WiFi connected message once rather than every loop.
    if (!was_wifi_connected_message_output)
    {
      Serial.println(String("WiFi Connected to ") + WIFI_SSID);
      was_wifi_connected_message_output = true;
    }
  }
  else
  {
    // Output still connecting message, yield to other tasks and wait a second.
    Serial.println(String("WiFi still connecting to ") + WIFI_SSID);
    yield();
    delay(1000);
    return;
  }

  // raisedevs is the name of the Workspace in the Raise.dev Console.
  // VERSION_STRING_FROM_GIT is defined in platformio.ini using `git describe`.
  raiseDev.updateFirmware("raisedevs", VERSION_STRING_FROM_GIT);
}
