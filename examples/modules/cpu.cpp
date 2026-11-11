#include <atmega2560/CPU.h>

namespace mcu = atmega2560;

static_assert(static_cast<unsigned>(mcu::cpu::StatusFlag::GlobalInterrupt) == 7, "ATmega2560 CPU definition");
