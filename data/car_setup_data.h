//
// Created by Seweryn on 03.04.2021.
//

#ifndef LECLERC_CARSETUPDATA_H
#include "packet_header.h"
#define LECLERC_CARSETUPDATA_H

namespace leclerc {
    struct car_setup_data {
        uint8_t m_frontWing;
        uint8_t m_rearWing;
        uint8_t m_onThrottle;
        uint8_t m_offThrottle;
        float m_frontCamber;
        float m_rearCamber;
        float m_frontToe;
        float m_rearToe;
        uint8_t m_frontSuspension;
        uint8_t m_rearSuspension;
        uint8_t m_frontAntiRollBar;
        uint8_t m_rearAntiRollBar;
        uint8_t m_frontSuspensionHeight;
        uint8_t m_rearSuspensionHeight;
        uint8_t m_brakePressure;
        uint8_t m_brakeBias;
        float m_frontTyrePressure;
        float m_rearTyrePressure;
        uint8_t m_ballast;
        float m_fuelLoad;
    };
}

#endif //LECLERC_CARSETUPDATA_H
