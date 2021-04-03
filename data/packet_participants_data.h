//
// Created by Seweryn on 03.04.2021.
//

#ifndef LECLERC_PACKETPARTICIPANTSDATA_H
#include "participant_data.h"
#define LECLERC_PACKETPARTICIPANTSDATA_H

namespace leclerc {
    struct packet_participants_data {
        packet_header m_header;
        std::uint8_t m_numActiveCars;
        participant_data m_participants[20];
    };
}

#endif //LECLERC_PACKETPARTICIPANTSDATA_H
