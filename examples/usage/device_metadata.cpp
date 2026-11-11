#include <atmega2560/Device.h>

namespace mcu = atmega2560;

static_assert(mcu::device::signature_byte_1 == 0x98, "ATmega2560 signature");
