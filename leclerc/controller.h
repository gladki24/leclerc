//
// Created by Seweryn on 16.04.2021.
//

#ifndef LECLERC_CONTROLLER_H
#include <ESP8266WiFi.h>
#include <WiFiUdp.h>
#include <Wire.h>
#include "packet_handler_factory.h"
#include "PCF8574.h"
#define LECLERC_CONTROLLER_H

namespace leclerc {
    class controller {
    public:
        controller();

        void setup();
        void loop();

        void display_gear(const int& value);
        void clear_gear();

        void display_rpm(const int& rpm);
        void clear_rpm();
    private:
        char dataBuffer[2048];
        WiFiUDP Udp;

        packet_handler_factory handler_factory;
        packet_handler* handler;

        unsigned int max_rpm;

        PCF8574 rpm_pcf_1;
        PCF8574 rpm_pcf_2;
        PCF8574 gear_pcf;
    };
}

#endif //LECLERC_CONTROLLER_H
