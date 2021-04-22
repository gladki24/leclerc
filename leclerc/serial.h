//
// Created by Seweryn on 21.04.2021.
//

#ifndef LECLERC_SERIAL_H
#include <Arduino.h>
#include "packet_header.h"
#include "car_status_data.h"
#include "car_telemetry_data.h"
#define LECLERC_SERIAL_H

namespace leclerc {
    class serial {
    public:
        static void log_header(const leclerc::packet_header& header);
        static void log_telemetry(const leclerc::car_telemetry_data& telemetry);
        static void log_status(const leclerc::car_status_data& status);
    };
}

#endif //LECLERC_SERIAL_H
