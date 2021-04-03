//
// Created by Seweryn on 03.04.2021.
//

#ifndef LECLERC_MARSHALZONE_H
#include "./packet_header.h"
#define LECLERC_MARSHALZONE_H

namespace leclerc {
    struct marshal_zone {
        float m_zoneStart;
        std::int8_t m_zoneFlag;
    };
}

#endif //LECLERC_MARSHALZONE_H
