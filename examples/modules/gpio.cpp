#include <atmega2560/GPIO.h>

namespace mcu = atmega2560;

static_assert(mcu::gpio::port_count == 11, "ATmega2560 GPIO definition");
