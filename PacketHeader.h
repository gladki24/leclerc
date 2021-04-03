#ifndef LECLERC_PACKETHEADER_H
#include <cstdint>
#define LECLERC_PACKETHEADER_H

struct PacketHeader {
public:
    std::uint16_t m_packetFormat;
    std::uint8_t m_gameMajorVersion;
    std::uint8_t m_gameMinorVersion;
    std::uint8_t m_packetVersion;
    std::uint8_t m_packetId;
    std::uint64_t m_sessionUID;

};

#endif //LECLERC_PACKETHEADER_H
