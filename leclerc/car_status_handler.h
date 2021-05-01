//
// Created by Seweryn on 19.04.2021.
//

#ifndef LECLERC_CAR_STATUS_HANDLER_H

#include "packet_handler.h"
#include "Arduino.h"
#include "packet_car_status_data.h"
#include "serial.h"

#define LECLERC_CAR_STATUS_HANDLER_H

namespace leclerc {
    class car_status_handler : public leclerc::packet_handler {
    public:
        car_status_handler(WiFiUDP &udp);

        ~car_status_handler();

        void handle() override;
    };
}

#endif //LECLERC_CAR_STATUS_HANDLER_H
