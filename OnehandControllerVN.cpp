#include <iostream>
#include "pico/stdlib.h"
#include "classes/Bluetooth.hpp"
#include "classes/Firmware.hpp"

#define BUTTON_PIN 17
#define LED_PIN 15

bool pressed = false;

int main() {
    Firmware firmware;
    gpio_init(BUTTON_PIN);
    gpio_set_dir(BUTTON_PIN, GPIO_IN);
    gpio_pull_down(BUTTON_PIN);
    // gpio_set_irq_enabled_with_callback(
    //     BUTTON_PIN,
    //     GPIO_IRQ_EDGE_RISE,
    //     true,
    //     [](uint gpio, uint32_t events) -> void {
    //         sleep_ms(500);
    //         printf("Pressed.");
    //         pressed = !pressed;
    //         gpio_put(LED_PIN, ON);
    //     }
    // );
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    

    while (true) {
        if (gpio_get(BUTTON_PIN) && !pressed) {
            printf("UP.\n");
            pressed = true;
            gpio_put(LED_PIN, ON);
            sleep_ms(500);
        } else if (gpio_get(BUTTON_PIN) && pressed) {
            printf("UP.\n");
            pressed = false;
            gpio_put(LED_PIN, OFF);
            sleep_ms(500);
        }
        //printf("AAA");
        // firmware.setOnboardLED(ON);
        // sleep_ms(1000);
        // firmware.setOnboardLED(OFF);
        // sleep_ms(1000);
    }
}
