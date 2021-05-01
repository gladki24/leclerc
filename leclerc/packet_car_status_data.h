//
// Created by Seweryn on 03.04.2021.
//

#ifndef LECLERC_PACKETCARSTATUSDATA_H
#include "car_status_data.h"
#define LECLERC_PACKETCARSTATUSDATA_H

#pragma pack(push, 1)
namespace leclerc {
    struct packet_car_status_data {
        packet_header m_header;
        car_status_data m_carStatusData[20];
    };
}

#pragma pack(pop)
#endif //LECLERC_PACKETCARSTATUSDATA_H
