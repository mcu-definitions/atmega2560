#include <atmega2560/Memory.h>

namespace mcu = atmega2560;

static_assert(mcu::memory::sram_start_address == 0x0200, "ATmega2560 Memory definition");
