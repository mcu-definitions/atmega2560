#include <atmega2560/JTAG.h>

namespace mcu = atmega2560;

static_assert(mcu::jtag::supported == 1, "ATmega2560 JTAG definition");
