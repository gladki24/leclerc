//
// Created by Seweryn on 19.04.2021.
//

#include "car_status_handler.h"

leclerc::car_status_handler::car_status_handler(WiFiUDP& udp) : packet_handler(udp) { }

leclerc::car_status_handler::~car_status_handler() { }

void leclerc::car_status_handler::handle() {
    leclerc::packet_car_status_data status;
    read_data<leclerc::packet_car_status_data>(status);
    uint16_t version = status.m_header.m_packetFormat;
    int value = version;
    Serial.println("Car status: ");
    Serial.printf("%d", value);
}