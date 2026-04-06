#include "Firmware.hpp"
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

Firmware::Firmware() {
    // Inits SERIAL
    stdio_init_all();

    // Inits special architecture for Network and all
    if (cyw43_arch_init()) {
        printf("Wi-Fi init failed\n");
        return -1;
    }
};

Firmware::~Firmware() {
    cyw43_arch_deinit();
    stdio_deinit_all();
};

void Firmware::setOnboardLED(bool mode) {
    cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, mode);
}