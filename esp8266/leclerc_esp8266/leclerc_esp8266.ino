// TODO fix data library
// #include "../../leclerc.h"
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>

const char* ssid = "***"; // set WIFI name compilation
const char* password = "secret"; // set WIFI passowrd before compilation

WiFiUDP Udp;
unsigned int udpPort = 4210;
char incomingPacket[255];

void setup() {
  WiFi.begin(ssid, password);
  delay(500);
  Udp.begin(udpPort);
}

void loop() {
  int packetSize = Udp.parsePacket();

  if (packetSize) {
    int len = Udp.read(incomingPacket);

    if (len > 0) {
      incomingPacket[len] = 0;
    }
  }
}
