//
// Created by Seweryn on 03.04.2021.
//

#ifndef LECLERC_PACKETCARSETUPDATA_H
#include "car_setup_data.h"
#define LECLERC_PACKETCARSETUPDATA_H

namespace leclerc {
    struct packet_car_setup_data {
        packet_header m_header;
        car_setup_data m_carSetups[20];
    };
}

#endif //LECLERC_PACKETCARSETUPDATA_H
