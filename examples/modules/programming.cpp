#include <atmega2560/Programming.h>

namespace mcu = atmega2560;

static_assert(mcu::programming::signature_byte_2 == 0x01, "ATmega2560 Programming definition");
