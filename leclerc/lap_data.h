//
// Created by Seweryn on 03.04.2021.
//

#ifndef LECLERC_LAPDATA_H
#include "./packet_header.h"
#define LECLERC_LAPDATA_H

namespace leclerc {
    struct lap_data {
        float m_lastLapTime;
        float m_currentLapTime;
        float m_bestLapTime;
        float m_sector1Time;
        float m_sector2Time;
        float m_lapDistance;
        float m_totalDistance;
        float m_safetyCarDelta;
        uint8_t m_carPosition;
        uint8_t m_currentLapNum;
        uint8_t m_pitStatus;
        uint8_t m_sector;
        uint8_t m_currentLapInvalid;
        uint8_t m_penalties;
        uint8_t m_gridPosition;
        uint8_t m_driverStatus;
        uint8_t m_resultStatus;
    };
}

#endif //LECLERC_LAPDATA_H
