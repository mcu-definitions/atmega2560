#include <atmega2560/LockBits.h>

namespace mcu = atmega2560;

static_assert(static_cast<unsigned>(mcu::lock_bits::Bit::BLB12) == 5, "ATmega2560 LockBits definition");
