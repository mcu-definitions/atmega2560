#include <atmega2560/TWI.h>

namespace mcu = atmega2560;

static_assert(mcu::twi::scl_pin_value == 0x30, "ATmega2560 TWI definition");
