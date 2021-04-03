//
// Created by Seweryn on 03.04.2021.
//

#ifndef LECLERC_CARMOTIONDATA_H
#include "./packet_header.h"
#define LECLERC_CARMOTIONDATA_H

namespace leclerc {
    struct car_motion_data {
        float m_worldPositionX;
        float m_worldPositionY;
        float m_worldPositionZ;
        float m_worldVelocityX;
        float m_worldVelocityY;
        float m_worldVelocityZ;
        std::int16_t m_worldForwardDirX;
        std::int16_t m_worldForwardDirY;
        std::int16_t m_worldForwardDirZ;
        std::int16_t m_worldRightDirX;
        std::int16_t m_worldRightDirY;
        std::int16_t m_worldRightDirZ;
        float m_gForceLateral;
        float m_gForceLongitudinal;
        float m_gForceVertical;
        float m_yaw;
        float m_pitch;
        float m_roll;
    };
}

#endif //LECLERC_CARMOTIONDATA_H
