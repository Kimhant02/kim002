#ifndef MODULE_H
#define MODULE_H

/*
WiFi 3 Mode
1 -> AP (Access Point)
2 -> STA (Station)
3 -> APSTA (Access Point and Station)
*/

#include <Arduino.h>
/*----------------lip------------------*/
#include <WiFi.h>
#include <SPIFFS.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <ESPmDNS.h>

/*----------------lip------------------*/

/*----------------Vrab------------------*/


/*----------------fuc------------------*/
extern AsyncWebServer server;
extern const char* ssid;
extern const char* password;

void setup_wifi();
void setup_wifiAP();
void ConfigServer ();
void handleIndax (AsyncWebServerRequest * request);

#endif