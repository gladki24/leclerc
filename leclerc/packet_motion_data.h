//
// Created by Seweryn on 03.04.2021.
//

#ifndef LECLERC_PACKETMOTIONDATA_H
#include "./car_motion_data.h"
#define LECLERC_PACKETMOTIONDATA_H

namespace leclerc {
    struct packet_motion_data {
        packet_header m_header;
        car_motion_data m_carMotionData[20];
        float m_suspensionPosition[4];
        float m_suspensionVelocity[4];
        float m_suspensionAcceleration[4];
        float m_wheelSpeed[4];
        float m_wheelSlip[4];
        float m_localVelocityX;
        float m_localVelocityY;
        float m_localVelocityZ;
        float m_angularVelocityX;
        float m_angularVelocityY;
        float m_angularVelocityZ;
        float m_angularAccelerationX;
        float m_angularAccelerationY;
        float m_angularAccelerationZ;
        float m_frontWheelAngle;
    };
}

#endif //LECLERC_PACKETMOTIONDATA_H
