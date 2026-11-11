#include <atmega2560/XMEM.h>

namespace mcu = atmega2560;

static_assert(mcu::xmem::external_memory_start == 0x2200, "ATmega2560 XMEM definition");
