#include <atmega2560/Watchdog.h>

namespace mcu = atmega2560;

static_assert(mcu::watchdog::supports_interrupt_mode == 1, "ATmega2560 Watchdog definition");
