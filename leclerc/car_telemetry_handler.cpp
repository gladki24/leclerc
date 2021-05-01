//
// Created by Seweryn on 19.04.2021.
//

#include "car_telemetry_handler.h"

leclerc::car_telemetry_handler::car_telemetry_handler(WiFiUDP& udp) : packet_handler(udp) { }

leclerc::car_telemetry_handler::~car_telemetry_handler() { }

void leclerc::car_telemetry_handler::handle() {
    leclerc::packet_car_telemetry_data telemetry_packet;
    udp.read((char*)& telemetry_packet, sizeof(leclerc::packet_car_telemetry_data));
    leclerc::packet_header& header = telemetry_packet.m_header;
    leclerc::car_telemetry_data& telemetry = telemetry_packet.m_carTelemetryData[header.m_playerCarIndex];
    leclerc::log_telemetry(telemetry);
}