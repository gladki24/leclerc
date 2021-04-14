//
// Created by Seweryn on 03.04.2021.
//

#ifndef LECLERC_PACKETCARTELEMETRYDATA_H
#include "car_telemetry_data.h"
#define LECLERC_PACKETCARTELEMETRYDATA_H

namespace leclerc {
    struct packet_car_telemetry_data {
        packet_header m_header;
        car_telemetry_data m_carTelemetryData[20];
        uint32_t m_buttonStatus;
    };
}

#endif //LECLERC_PACKETCARTELEMETRYDATA_H
