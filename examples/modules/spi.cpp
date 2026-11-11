#include <atmega2560/SPI.h>

namespace mcu = atmega2560;

static_assert(mcu::spi::ss_pin_value == 0x10, "ATmega2560 SPI definition");
