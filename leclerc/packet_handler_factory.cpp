//
// Created by Seweryn on 19.04.2021.
//

#include "packet_handler_factory.h"

leclerc::packet_handler_factory::packet_handler_factory(WiFiUDP& udp) : udp(udp) {}

leclerc::packet_handler* leclerc::packet_handler_factory::create_packet_handler(packet_id packet_id) {
    switch(packet_id) {
        case leclerc::packet_id::car_telemetry:
            return new car_telemetry_handler(udp);
        case leclerc::packet_id::car_status:
            return new car_status_handler(udp);
        default:
            return nullptr;
    }
}