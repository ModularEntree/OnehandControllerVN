#ifndef FIRMWARE
#define FIRMWARE

#define ON true
#define OFF false

class Firmware {
public:
    Firmware();
    ~Firmware();

    static void setOnboardLED(bool mode);
    static void setOnboardLED(int mode);
};

#endif