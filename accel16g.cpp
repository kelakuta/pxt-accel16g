#include "MicroBit.h"

extern MicroBit uBit;

namespace accel16g {
    //%
    void enable16g() {
        const uint8_t CTRL_REG4_A = 0x23;
        uint8_t data[2];
        data[0] = CTRL_REG4_A;
        data[1] = 0x30;
        uBit.i2c.write(0x32, (char*)data, 2);
    }
}
