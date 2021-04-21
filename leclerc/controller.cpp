//
// Created by Seweryn on 16.04.2021.
//

#include "controller.h"

leclerc::controller::controller() : handler_factory(Udp) {}

void leclerc::controller::setup() {
    // configure serial output to debug
    Serial.begin(115200);

    // configure
    if (!WiFi.config(
            IPAddress(192, 168, 0, 156),
            IPAddress(192, 168, 0, 1),
            IPAddress(255, 255, 255, 0),
            IPAddress(8, 8, 8, 8)
    )) {
        Serial.println("Failed to connect to WI-FI");
    }

    // start connecting
    Serial.println("Connecting to:");
    Serial.println("TP-LINK");

    WiFi.begin(
            "TP-Link_2C1A",
            "Synchronik1809$"
    );

    // try to connect
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    // end
    Serial.println("Connected!");
    Serial.println(WiFi.localIP());

    // configure UDP
    Udp.begin(9191);
}

void leclerc::controller::loop() {
    int packetSize = Udp.parsePacket();
    
    if (packetSize > 0) {
        // Serial.printf("Incoming packet size: %d \n", packetSize);
        handler = handler_factory
                .create_packet_handler(static_cast<packet_id>(packetSize));

        if (handler != nullptr) {
            handler->handle();
            delete handler;
        }
    }
//    if (packetSize) {
//        char replyPacket[] = "Hi there! Got the message :-)";
//
//        // receive incoming UDP packets
//        Serial.printf("Received %d bytes from %s, port %d\n", packetSize, Udp.remoteIP().toString().c_str(),
//                      Udp.remotePort());
//        int len = Udp.read(dataBuffer, 2048);
//        if (len > 0) {
//            dataBuffer[len] = 0;
//        }
//        Serial.printf("UDP packet contents: %s\n", dataBuffer);
//
//        // send back a reply, to the IP address and port we got the packet from
//        Udp.beginPacket(Udp.remoteIP(), Udp.remotePort());
//        Udp.write(replyPacket);
//        Udp.endPacket();
//    }
}