//
// Created by Seweryn on 19.04.2021.
//

#include "packet_handler.h"

leclerc::packet_handler::packet_handler(WiFiUDP &udp) : udp(udp) { }

leclerc::packet_handler::~packet_handler() { }
