//
// Created by Seweryn on 03.04.2021.
//

#ifndef LECLERC_CARTELEMETRYDATA_H
#include "packet_header.h"
#define LECLERC_CARTELEMETRYDATA_H

namespace leclerc {
    struct car_telemetry_data {
        uint16_t m_speed;
        float m_throttle;
        float m_steer;
        float m_brake;
        uint8_t m_clutch;
        int8_t m_gear;
        uint16_t m_engineRPM;
        uint8_t m_drs;
        uint8_t m_revLightsPercent;
        uint16_t m_brakesTemperature[4];
        uint16_t m_tyresSurfaceTemperature[4];
        uint16_t m_engineTemperature;
        float m_tyresPressure[4];
        uint8_t m_surfaceType[4];
    };
}

#endif //LECLERC_CARTELEMETRYDATA_H
