#include "pxt.h"

using namespace pxt;

namespace accel16g {

    //%
    void enable16g() {

        const uint8_t addr = 0x32;
        const uint8_t reg = 0x23;

        uint8_t buf[2];
        buf[0] = reg;
        buf[1] = 0x30;   // ±16g

        uBit.i2c.write(addr, (char*)buf, 2);
    }

}
