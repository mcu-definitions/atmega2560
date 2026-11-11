#include <atmega2560/RegisterMap.h>

namespace mcu = atmega2560;

static_assert(mcu::register_map::UDR3 == 0x136, "ATmega2560 RegisterMap definition");
