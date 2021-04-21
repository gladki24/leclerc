//
// Created by Seweryn on 19.04.2021.
//

#ifndef LECLERC_PACKET_HANDLER_H

#include <WiFiUdp.h>
#include "packet_id.h"

#define LECLERC_PACKET_HANDLER_H

namespace leclerc {
    class packet_handler {
    public:
        packet_handler(WiFiUDP &udp);

        virtual ~packet_handler();

        virtual void handle() = 0;

    protected:
        WiFiUDP &udp;

        template<class TData>
        void read_data(TData data) {
            udp.read((char *) &data, sizeof(TData));
        }
    };
}

#endif //LECLERC_PACKET_HANDLER_H
