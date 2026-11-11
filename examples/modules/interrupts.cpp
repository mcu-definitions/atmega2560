#include <atmega2560/Interrupts.h>

namespace mcu = atmega2560;

static_assert(static_cast<unsigned>(mcu::interrupts::Vector::USART3TransmitComplete) == 57, "ATmega2560 Interrupts definition");
