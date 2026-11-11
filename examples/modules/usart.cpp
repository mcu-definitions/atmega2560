#include <atmega2560/USART.h>

namespace mcu = atmega2560;

static_assert(mcu::usart::module_count == 4, "ATmega2560 USART definition");
