//
// Created by Seweryn on 03.04.2021.
//

#ifndef LECLERC_PACKETID_H
#define LECLERC_PACKETID_H

namespace leclerc {
    enum packet_id {
        Motion,
        Session,
        LapData,
        Event,
        Participants,
        CarSetups,
        CarTelemetry,
        CarStatus
    };
}

#endif //LECLERC_PACKETID_H
