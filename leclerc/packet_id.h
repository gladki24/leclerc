//
// Created by Seweryn on 03.04.2021.
//

#ifndef LECLERC_PACKETID_H
#define LECLERC_PACKETID_H

namespace leclerc {
    enum packet_id {
        motion = 1343,
        session = 149,
        lap_data = 843,
        event = 32,
        participants = 1104,
        car_setups = 843,
        car_telemetry = 1347,
        car_status = 1143
    };
}

#endif //LECLERC_PACKETID_H
