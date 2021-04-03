//
// Created by Seweryn on 03.04.2021.
//

#ifndef LECLERC_CARSTATUSDATA_H
#include "packet_header.h"
#define LECLERC_CARSTATUSDATA_H

namespace leclerc {
    struct car_status_data {
        std::uint8_t m_tractionControl;
        std::uint8_t m_antiLockBrakes;
        std::uint8_t m_fuelMix;
        std::uint8_t m_frontBrakeBias;
        std::uint8_t m_pitLimiterStatus;
        float m_fuelInTank;
        float m_fuelCapacity;
        float m_fuelRemainingLaps;
        std::uint16_t m_maxRPM;
        std::uint16_t m_idleRPM;
        std::uint8_t m_maxGears;
        std::uint8_t m_drsAllowed;
        std::uint8_t m_tyresWear[4];
        std::uint8_t m_actualTyreCompound;
        std::uint8_t m_tyreVisualCompound;
        std::uint8_t m_tyresDamage[4];
        std::uint8_t m_frontLeftWingDamage;
        std::uint8_t m_frontRightWingDamage;
        std::uint8_t m_rearWingDamage;
        std::uint8_t m_engineDamage;
        std::uint8_t m_gearBoxDamage;
        std::int8_t m_vehicleFiaFlags;
        std::float m_ersStoreEnergy;
        std::uint8_t m_ersDeployMode;
        float m_ersHarvestedThisLapMGUK;
        float m_ersHarvestedThisLapMGUH;
        float m_ersDeployedThisLap;
    };
}

#endif //LECLERC_CARSTATUSDATA_H
