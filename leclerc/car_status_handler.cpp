//
// Created by Seweryn on 19.04.2021.
//

#include "car_status_handler.h"

leclerc::car_status_handler::car_status_handler(WiFiUDP& udp) : packet_handler(udp) { }

leclerc::car_status_handler::~car_status_handler() { }

void leclerc::car_status_handler::handle() {
    leclerc::packet_car_status_data status_packet;
    udp.read((char*)& status_packet, sizeof(leclerc::packet_car_status_data));
    leclerc::packet_header& header = status_packet.m_header;
    leclerc::car_status_data status = status_packet.m_carStatusData[header.m_playerCarIndex];
    leclerc::log_status(status);
}