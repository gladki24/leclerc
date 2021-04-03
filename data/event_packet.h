//
// Created by Seweryn on 03.04.2021.
//

#ifndef LECLERC_EVENTPACKET_H
#include "./packet_header.h"
#define LECLERC_EVENTPACKET_H

namespace leclerc {
    union event_data_packet {
        struct fastest_lap {
            std::uint8_t vehicleIdx;
            float lapTime;
        };

        struct retirement {
            std::uint8_t vehicleIdx;
        };

        struct team_mate_in_pits {
            std::uint8_t vehicleIdx;
        };

        struct race_winner {
            std::uint8_t vehicleIdx;
        };
    };
}

#endif //LECLERC_EVENTPACKET_H
