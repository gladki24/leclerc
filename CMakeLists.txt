cmake_minimum_required(VERSION 3.17)
project(Leclerc)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        Leclerc
        leclerc.h
        leclerc.cpp
        data/data.h
        data/car_motion_data.h
        data/car_setup_data.h
        data/car_telemetry_data.h
        data/car_status_data.h
        data/event_packet.h
        data/lap_data.h
        data/marshal_zone.h
        data/packet_car_setup_data.h
        data/packet_car_status_data.h
        data/packet_car_telemetry_data.h
        data/packet_event_data.h
        data/packet_id.h
        data/packet_lap_data.h
        data/packet_motion_data.h
        data/packet_participants_data.h
        data/packet_session_data.h
        data/participant_data.h
        main.cpp)