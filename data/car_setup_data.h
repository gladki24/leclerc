//
// Created by Seweryn on 03.04.2021.
//

#ifndef LECLERC_CARSETUPDATA_H
#include "packet_header.h"
#define LECLERC_CARSETUPDATA_H

namespace leclerc {
    struct car_setup_data {
        std::uint8_t m_frontWing;
        std::uint8_t m_rearWing;
        std::uint8_t m_onThrottle;
        std::uint8_t m_offThrottle;
        float m_frontCamber;
        float m_rearCamber;
        float m_frontToe;
        float m_rearToe;
        std::uint8_t m_frontSuspension;
        std::uint8_t m_rearSuspension;
        std::uint8_t m_frontAntiRollBar;
        std::uint8_t m_rearAntiRollBar;
        std::uint8_t m_frontSuspensionHeight;
        std::uint8_t m_rearSuspensionHeight;
        std::uint8_t m_brakePressure;
        std::uint8_t m_brakeBias;
        float m_frontTyrePressure;
        float m_rearTyrePressure;
        std::uint8_t m_ballast;
        float m_fuelLoad;
    };
}

#endif //LECLERC_CARSETUPDATA_H
