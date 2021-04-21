//
// Created by Seweryn on 19.04.2021.
//

#include "car_telemetry_handler.h"

leclerc::car_telemetry_handler::car_telemetry_handler(WiFiUDP& udp) : packet_handler(udp) { }

leclerc::car_telemetry_handler::~car_telemetry_handler() { }

void leclerc::car_telemetry_handler::handle() {
    leclerc::packet_car_telemetry_data telemetry;
    read_data<leclerc::packet_car_telemetry_data>(telemetry);
    uint16_t version = telemetry.m_header.m_packetFormat;
    int value = version;
    Serial.println("Telementry: ");
    Serial.printf("%d", value);
}