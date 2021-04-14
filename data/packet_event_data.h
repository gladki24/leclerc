//
// Created by Seweryn on 03.04.2021.
//

#ifndef LECLERC_PACKETEVENTDATA_H
#include "./event_packet.h"
#define LECLERC_PACKETEVENTDATA_H

namespace leclerc {
    struct packet_event_data {
        packet_header m_header;
        uint8_t m_eventStringCode[4];
        event_data_packet m_eventDetails;
    };
}

#endif //LECLERC_PACKETEVENTDATA_H
