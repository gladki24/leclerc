//
// Created by Seweryn on 03.04.2021.
//

#ifndef LECLERC_CARMOTIONDATA_H
#define LECLERC_CARMOTIONDATA_H

namespace leclerc {
    struct car_motion_data {
        float m_worldPositionX;
        float m_worldPositionY;
        float m_worldPositionZ;
        float m_worldVelocityX;
        float m_worldVelocityY;
        float m_worldVelocityZ;
        int16_t m_worldForwardDirX;
        int16_t m_worldForwardDirY;
        int16_t m_worldForwardDirZ;
        int16_t m_worldRightDirX;
        int16_t m_worldRightDirY;
        int16_t m_worldRightDirZ;
        float m_gForceLateral;
        float m_gForceLongitudinal;
        float m_gForceVertical;
        float m_yaw;
        float m_pitch;
        float m_roll;
    };
}

#endif //LECLERC_CARMOTIONDATA_H
