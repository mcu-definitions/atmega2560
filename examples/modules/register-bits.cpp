#include <atmega2560/RegisterBits.h>

namespace mcu = atmega2560;

static_assert(mcu::register_bits::eimsk::int7 == 7, "ATmega2560 RegisterBits definition");
