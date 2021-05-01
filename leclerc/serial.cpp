//
// Created by Seweryn on 21.04.2021.
//

#include "serial.h"

void leclerc::log_header(const leclerc::packet_header &header) {
    int packet_format = header.m_packetFormat;
    int major_version = header.m_gameMajorVersion;
    int minor_version = header.m_gameMinorVersion;
    int packet_version = header.m_packetVersion;
    int packet_id = header.m_packetId;
    float session_time = header.m_sessionTime;
    unsigned long long int frame = header.m_sessionUID;
    int player_index = header.m_playerCarIndex;

    Serial.printf(
            "header - format: %d, major: %d, minor: %d, version: %d, id: %d, time: %f, index: %d",
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

void leclerc::log_status(const leclerc::car_status_data &status) {
    unsigned int max_rpm = status.m_maxRPM;
    unsigned int max_gear = status.m_maxGears;

    Serial.printf("max RPM: %u, max gear: %u", max_rpm, max_gear);
    Serial.println("");
}

void leclerc::log_telemetry(const leclerc::car_telemetry_data& telemetry) {
    int gear = telemetry.m_gear;
    unsigned int rpm = telemetry.m_engineRPM;

    Serial.printf("gear: %i, rpm: %u", gear, rpm);
    Serial.println("");
}

void leclerc::log_speed(const leclerc::car_telemetry_data &telemetry) {
    unsigned int speed = telemetry.m_speed;

    if (speed >= 0 && speed <= 400) {
        Serial.printf("speed: %u", speed);
        Serial.println("");
    }
}