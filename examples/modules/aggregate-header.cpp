#include <atmega2560/ATmega2560.h>

namespace mcu = atmega2560;

static_assert(mcu::memory::flash_size_bytes == 262144UL, "ATmega2560 ATmega2560 definition");
