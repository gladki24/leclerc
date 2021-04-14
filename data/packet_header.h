#ifndef LECLERC_PACKETHEADER_H
#include "stdint.h"
#define LECLERC_PACKETHEADER_H

namespace leclerc {
    struct packet_header {
        uint16_t m_packetFormat;
        uint8_t m_gameMajorVersion;
        uint8_t m_gameMinorVersion;
        uint8_t m_packetVersion;
        uint8_t m_packetId;
        uint64_t m_sessionUID;
        float m_sessionTime;
        uint32_t m_frameIdentifier;
        uint8_t m_playerCarIndex;
    };
}

#endif //LECLERC_PACKETHEADER_H
