#include <atmega2560/Reset.h>

namespace mcu = atmega2560;

static_assert(mcu::reset::has_jtag_reset == 1, "ATmega2560 Reset definition");
