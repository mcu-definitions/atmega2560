#include <atmega2560/Power.h>

namespace mcu = atmega2560;

static_assert(mcu::power::has_prr1 == 1, "ATmega2560 Power definition");
