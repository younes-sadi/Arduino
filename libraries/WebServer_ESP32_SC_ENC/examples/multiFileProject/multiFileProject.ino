/****************************************************************************************************************************
  multiFileProject.ino
  For Ethernet shields using ESP32_SC_ENC (ESP32_S2/3, ESP32_C3 + LwIP ENC28J60)

  WebServer_ESP32_SC_ENC28J60 is a library for the ESP32_S2/3, ESP32_C3 with LwIP Ethernet ENC28J60

  Based on and modified from ESP8266 https://github.com/esp8266/Arduino/releases
  Built by Khoi Hoang https://github.com/khoih-prog/WebServer_ESP32_SC_ENC
  Licensed under GPLv3 license
*****************************************************************************************************************************/

// To demo how to include files in multi-file Projects

#include "multiFileProject.h"

// Can be included as many times as necessary, without `Multiple Definitions` Linker Error
#include "WebServer_ESP32_SC_ENC.h"

void setup()
{
  Serial.begin(115200);

  while (!Serial && (millis() < 5000));

  delay(500);

  Serial.println("\nStart multiFileProject");
  Serial.println(WEBSERVER_ESP32_SC_ENC_VERSION);


  Serial.print("You're OK now");
}

void loop()
{
  // put your main code here, to run repeatedly:
}
