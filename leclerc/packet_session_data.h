//
// Created by Seweryn on 03.04.2021.
//

#ifndef LECLERC_PACKETSESSIONDATA_H
#include "./marshal_zone.h"
#define LECLERC_PACKETSESSIONDATA_H

namespace leclerc {
    struct packet_session_data {
        packet_header m_header;
        uint8_t m_weather;
        int8_t m_trackTemperature;
        int8_t m_airTemperature;
        uint8_t m_totalLaps;
        uint16_t m_trackLength;
        uint8_t m_sessionType;
        int8_t m_trackId;
        uint8_t m_formula;
        uint16_t m_sessionTimeLeft;
        uint16_t m_sessionDuration;
        uint8_t m_pitSpeedLimit;
        uint8_t m_gamePaused;
        uint8_t m_isSpectating;
        uint8_t m_spectatorCarIndex;
        uint8_t m_sliProNativeSupport;
        uint8_t m_numMarshalZones;
        marshal_zone m_marshalZones[21];
        uint8_t m_safetyCarStatus;
        uint8_t m_networkGame;
    };
}

#endif //LECLERC_PACKETSESSIONDATA_H
