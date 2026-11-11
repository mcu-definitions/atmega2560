#include <atmega2560/Architecture.h>

namespace mcu = atmega2560;

static_assert(mcu::architecture::program_counter_bits == 17, "ATmega2560 Architecture definition");
