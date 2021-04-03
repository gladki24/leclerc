#ifndef LECLERC_PACKETHEADER_H
#define LECLERC_PACKETHEADER_H

namespace leclerc {
    struct packet_header {
        std::uint16_t m_packetFormat;
        std::uint8_t m_gameMajorVersion;
        std::uint8_t m_gameMinorVersion;
        std::uint8_t m_packetVersion;
        std::uint8_t m_packetId;
        std::uint64_t m_sessionUID;
        std::float m_sessionTime;
        std::uint32_t m_frameIdentifier;
        std::uint8_t m_playerCarIndex;
    };
}

#endif //LECLERC_PACKETHEADER_H
