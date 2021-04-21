cmake_minimum_required(VERSION 3.17)
project(Leclerc)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        Leclerc
        leclerc.h
        leclerc.cpp
        leclerc/data.h
        leclerc/car_motion_data.h
        leclerc/car_setup_data.h
        leclerc/car_telemetry_data.h
        leclerc/car_status_data.h
        leclerc/event_packet.h
        leclerc/lap_data.h
        leclerc/marshal_zone.h
        leclerc/packet_car_setup_data.h
        leclerc/packet_car_status_data.h
        leclerc/packet_car_telemetry_data.h
        leclerc/packet_event_data.h
        leclerc/packet_id.h
        leclerc/packet_lap_data.h
        leclerc/packet_motion_data.h
        leclerc/packet_participants_data.h
        leclerc/packet_session_data.h
        leclerc/participant_data.h
        main.cpp leclerc/leclerc.cpp leclerc/controller.h leclerc/logic.h leclerc/utils.h leclerc/controller.cpp leclerc/packet_handler_factory.cpp leclerc/packet_handler_factory.h leclerc/packet_handler.cpp leclerc/packet_handler.h leclerc/car_telemetry_handler.cpp leclerc/car_telemetry_handler.h leclerc/car_status_handler.cpp leclerc/car_status_handler.h)