#include <atmega2560/Pin.h>

namespace mcu = atmega2560;

static_assert(static_cast<unsigned>(mcu::pin::Pin::PL5) == 0xA5, "ATmega2560 Pin definition");
