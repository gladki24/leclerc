//
// Created by Seweryn on 16.04.2021.
//

#ifndef LECLERC_CONTROLLER_H
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>
#include "utils.h"
#include "packet_handler_factory.h"
#define LECLERC_CONTROLLER_H

namespace leclerc {
    class controller {
    public:
        controller();

        void setup();
        void loop();

    private:
        char dataBuffer[2048];
        WiFiUDP Udp;
        packet_handler_factory handler_factory;
        packet_handler* handler;
    };
}

#endif //LECLERC_CONTROLLER_H
