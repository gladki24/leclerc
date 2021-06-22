//
// Created by Seweryn on 16.05.2021.
//

#ifndef LECLERC_HANDLE_RESULT_H
#include "handle_result_type.h"
#define LECLERC_HANDLE_RESULT_H

namespace leclerc {
    struct handle_result {
        handle_result_type type;
        int rpm;
        unsigned int gear;
    };
}

#endif //LECLERC_HANDLE_RESULT_H
