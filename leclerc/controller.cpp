//
// Created by Seweryn on 16.04.2021.
//

#include "controller.h"

leclerc::controller::controller()
        : handler_factory(Udp), rpm_pcf_1(0x20), rpm_pcf_2(0x21), gear_pcf(0x23), max_rpm(13500) {}

void leclerc::controller::setup() {
    // configure serial output to debug
    Serial.begin(115200);

    // configure
    if (!WiFi.config(
            IPAddress(192, 168, 0, 156),
            IPAddress(192, 168, 0, 1),
            IPAddress(255, 255, 255, 0),
            IPAddress(8, 8, 8, 8)
    )) {
        Serial.println("Failed to connect to WI-FI");
    }

    // start connecting
    Serial.println("Connecting to:");
    Serial.println("TP-LINK");

    WiFi.begin(
            "TP-Link_2C1A",
            "Synchronik1809$"
    );

    // try to connect
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    // end
    Serial.println("Connected!");
    Serial.println(WiFi.localIP());

    // configure UDP
    Udp.begin(9191);

    Wire.begin(0, 2);
    rpm_pcf_1.begin();
    rpm_pcf_2.begin();
    gear_pcf.begin();

    Serial.println("I2C configured!");
}

void leclerc::controller::loop() {
    int packetSize = Udp.parsePacket();
    if (packetSize > 0) {
        handler = handler_factory.create_packet_handler(static_cast<packet_id>(packetSize));

        if (handler != nullptr) {
            handle_result result = handler->handle();

            if (result.type == max) {
                max_rpm = result.rpm;
            }

            if (result.type == value) {
                int rpm = result.rpm;
                int gear = result.gear;

                display_gear(gear);
                display_rpm(rpm);
            }

            delete handler;
        }
    }
}

void leclerc::controller::display_gear(const int &value) {
    // reset
    gear_pcf.write(0, HIGH);
    gear_pcf.write(1, HIGH);
    gear_pcf.write(2, HIGH);
    gear_pcf.write(3, HIGH);
    gear_pcf.write(4, HIGH);
    gear_pcf.write(5, HIGH);
    gear_pcf.write(6, HIGH);
    gear_pcf.write(7, HIGH);

    if (value == -1) {
        gear_pcf.write(3, LOW);
        gear_pcf.write(4, LOW);
        gear_pcf.write(2, LOW);
        gear_pcf.write(5, LOW);
        gear_pcf.write(1, LOW);
        gear_pcf.write(7, LOW);
    } else if (value == 0) {
        gear_pcf.write(1, LOW);
        gear_pcf.write(2, LOW);
        gear_pcf.write(3, LOW);
        gear_pcf.write(4, LOW);
        gear_pcf.write(6, LOW);
    } else if (value == 1) {
        gear_pcf.write(4, LOW);
        gear_pcf.write(6, LOW);
    } else if (value == 2) {
        gear_pcf.write(3, LOW);
        gear_pcf.write(4, LOW);
        gear_pcf.write(5, LOW);
        gear_pcf.write(1, LOW);
        gear_pcf.write(0, LOW);
    } else if (value == 3) {
        gear_pcf.write(3, LOW);
        gear_pcf.write(4, LOW);
        gear_pcf.write(5, LOW);
        gear_pcf.write(6, LOW);
        gear_pcf.write(0, LOW);
    } else if (value == 4) {
        gear_pcf.write(2, LOW);
        gear_pcf.write(5, LOW);
        gear_pcf.write(4, LOW);
        gear_pcf.write(6, LOW);
    } else if (value == 5) {
        gear_pcf.write(3, LOW);
        gear_pcf.write(2, LOW);
        gear_pcf.write(5, LOW);
        gear_pcf.write(6, LOW);
        gear_pcf.write(0, LOW);
    } else if (value == 6) {
        gear_pcf.write(3, LOW);
        gear_pcf.write(2, LOW);
        gear_pcf.write(1, LOW);
        gear_pcf.write(5, LOW);
        gear_pcf.write(6, LOW);
        gear_pcf.write(0, LOW);
    } else if (value == 7) {
        gear_pcf.write(3, LOW);
        gear_pcf.write(4, LOW);
        gear_pcf.write(6, LOW);
    } else if (value == 8) {
        gear_pcf.write(3, LOW);
        gear_pcf.write(4, LOW);
        gear_pcf.write(2, LOW);
        gear_pcf.write(5, LOW);
        gear_pcf.write(1, LOW);
        gear_pcf.write(6, LOW);
        gear_pcf.write(0, LOW);
    } else {
        gear_pcf.write(5, LOW);
    }
}

void leclerc::controller::clear_gear() {
    gear_pcf.write8(HIGH);
}

void leclerc::controller::display_rpm(const int &rpm) {
    clear_rpm();

    if (rpm > max_rpm * 1.0 / 9.0)
        rpm_pcf_1.write(5, HIGH);

    if (rpm > max_rpm * 2.0 / 9.0)
        rpm_pcf_1.write(4, HIGH);

    if (rpm > max_rpm * 3.0 / 9.0)
        rpm_pcf_1.write(3, HIGH);

    if (rpm > max_rpm * 4.0 / 9.0)
        rpm_pcf_1.write(2, HIGH);

    if (rpm > max_rpm * 5.0 / 9.0)
        rpm_pcf_1.write(1, HIGH);

    if (rpm > max_rpm * 6.0 / 9.0)
        rpm_pcf_2.write(5, HIGH);

    if (rpm > max_rpm * 7.0 / 9.0)
        rpm_pcf_2.write(6, HIGH);

    if (rpm > max_rpm * 8.0 / 9.0)
        rpm_pcf_2.write(3, HIGH);

    if (rpm >= max_rpm)
        rpm_pcf_2.write(2, HIGH);
}

void leclerc::controller::clear_rpm() {
    rpm_pcf_1.write8(LOW);
    rpm_pcf_2.write8(LOW);
}
