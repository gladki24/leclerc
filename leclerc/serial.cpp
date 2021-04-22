//
// Created by Seweryn on 21.04.2021.
//

#include "serial.h"

void leclerc::serial::log_header(const leclerc::packet_header &header) {
    int packet_format = header.m_packetFormat;
    int major_version = header.m_gameMajorVersion;
    int minor_version = header.m_gameMinorVersion;
    int packet_version = header.m_packetVersion;
    int packet_id = header.m_packetId;
    float session_time = header.m_sessionTime;
    unsigned long long int frame = header.m_sessionUID;
    int player_index = header.m_playerCarIndex;

    Serial.printf(
            "header - session: %u, format: %d, major: %d, minor: %d, version: %d, id: %d, time: %f, index: %d",
            packet_format,
            major_version,
            minor_version,
            packet_version,
            packet_id,
            session_time,
            player_index
            );
    Serial.println("");
}