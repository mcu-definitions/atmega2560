#include <atmega2560/ExternalInterrupts.h>

namespace mcu = atmega2560;

static_assert(mcu::external_interrupts::external_line_count == 8, "ATmega2560 ExternalInterrupts definition");
static_assert(static_cast<unsigned>(mcu::external_interrupts::PinChangePin::PCINT8) == 0x40, "PCINT8 on PE0");
static_assert(static_cast<unsigned>(mcu::external_interrupts::PinChangePin::PCINT9) == 0x80, "PCINT9 on PJ0");
static_assert(static_cast<unsigned>(mcu::external_interrupts::PinChangePin::PCINT23) == 0x97, "PCINT23 on PK7");
