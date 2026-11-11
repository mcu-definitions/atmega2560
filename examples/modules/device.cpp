#include <atmega2560/Device.h>

namespace mcu = atmega2560;

static_assert(mcu::device::usart_count == 4, "ATmega2560 Device definition");
