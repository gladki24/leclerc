//
// Created by Seweryn on 19.04.2021.
//

#ifndef LECLERC_CAR_TELEMETRY_HANDLER_H

#include "packet_handler.h"
#include "Arduino.h"
#include "packet_car_telemetry_data.h"
#include "serial.h"

#define LECLERC_CAR_TELEMETRY_HANDLER_H

namespace leclerc {
    class car_telemetry_handler : public leclerc::packet_handler {
    public:
        car_telemetry_handler(WiFiUDP &udp);

        ~car_telemetry_handler();

        leclerc::handle_result handle() override;
    };
}

#endif //LECLERC_CAR_TELEMETRY_HANDLER_H
