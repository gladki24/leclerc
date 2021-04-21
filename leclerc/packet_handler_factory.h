//
// Created by Seweryn on 19.04.2021.
//

#ifndef LECLERC_PACKET_HANDLER_FACTORY_H
#include <WiFiUdp.h>
#include "packet_handler.h"
#include "packet_id.h"
#include "car_status_handler.h"
#include "car_telemetry_handler.h"
#define LECLERC_PACKET_HANDLER_FACTORY_H

namespace leclerc {
    class packet_handler_factory {
    public:
        packet_handler_factory(WiFiUDP& udp);

        leclerc::packet_handler* create_packet_handler(packet_id packet_id);
    private:
        WiFiUDP& udp;
    };

}


#endif //LECLERC_PACKET_HANDLER_FACTORY_H
