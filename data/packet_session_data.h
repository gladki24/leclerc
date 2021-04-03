//
// Created by Seweryn on 03.04.2021.
//

#ifndef LECLERC_PACKETSESSIONDATA_H
#include "./marshal_zone.h"
#define LECLERC_PACKETSESSIONDATA_H

namespace leclerc {
    struct packet_session_data {
        packet_header m_header;
        std::uint8_t m_weather;
        std::int8_t m_trackTemperature;
        std::int8_t m_airTemperature;
        std::uint8_t m_totalLaps;
        std::uint16_t m_trackLength;
        std::uint8_t m_sessionType;
        std::int8_t m_trackId;
        std::uint8_t m_formula;
        std::uint16_t m_sessionTimeLeft;
        std::uint16_t m_sessionDuration;
        std::uint8_t m_pitSpeedLimit;
        std::uint8_t m_gamePaused;
        std::uint8_t m_isSpectating;
        std::uint8_t m_spectatorCarIndex;
        std::uint8_t m_sliProNativeSupport;
        std::uint8_t m_numMarshalZones;
        marshal_zone m_marshalZones[21];
        std::uint8_t m_safetyCarStatus;
        std::uint8_t m_networkGame;
    };
}

#endif //LECLERC_PACKETSESSIONDATA_H
