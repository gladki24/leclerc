//
// Created by Seweryn on 03.04.2021.
//

#ifndef LECLERC_PARTICIPANTDATA_H
#include "packet_header.h"
#define LECLERC_PARTICIPANTDATA_H

namespace leclerc {
    struct participant_data {
        uint8_t m_aiControlled;
        uint8_t m_driverId;
        uint8_t m_teamId;
        uint8_t m_raceNumber;
        uint8_t m_nationality;
        char m_name[48];
        uint8_t m_yourTelemetry;
    };
}

#endif //LECLERC_PARTICIPANTDATA_H
