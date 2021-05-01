//
// Created by Seweryn on 03.04.2021.
//

#ifndef LECLERC_CARSTATUSDATA_H
#include "packet_header.h"
#define LECLERC_CARSTATUSDATA_H

#pragma pack(push, 1)

namespace leclerc {
    struct car_status_data {
        uint8_t m_tractionControl;
        uint8_t m_antiLockBrakes;
        uint8_t m_fuelMix;
        uint8_t m_frontBrakeBias;
        uint8_t m_pitLimiterStatus;
        float m_fuelInTank;
        float m_fuelCapacity;
        float m_fuelRemainingLaps;
        uint16_t m_maxRPM;
        uint16_t m_idleRPM;
        uint8_t m_maxGears;
        uint8_t m_drsAllowed;
        uint8_t m_tyresWear[4];
        uint8_t m_actualTyreCompound;
        uint8_t m_tyreVisualCompound;
        uint8_t m_tyresDamage[4];
        uint8_t m_frontLeftWingDamage;
        uint8_t m_frontRightWingDamage;
        uint8_t m_rearWingDamage;
        uint8_t m_engineDamage;
        uint8_t m_gearBoxDamage;
        int8_t m_vehicleFiaFlags;
        float m_ersStoreEnergy;
        uint8_t m_ersDeployMode;
        float m_ersHarvestedThisLapMGUK;
        float m_ersHarvestedThisLapMGUH;
        float m_ersDeployedThisLap;
    };
}

#pragma pack(pop)
#endif //LECLERC_CARSTATUSDATA_H
