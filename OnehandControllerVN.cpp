#include <iostream>
#include <pico/stdlib.h>
#include "classes/Bluetooth.hpp"
#include "classes/Firmware.hpp"


int main() {
    Firmware firmware;

    while (true) {
        firmware.setOnboardLED(true);
        sleep_ms(1000);
        firmware.setOnboardLED(false);
        sleep_ms(1000);
    }
}
