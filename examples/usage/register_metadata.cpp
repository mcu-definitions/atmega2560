#include <atmega2560/RegisterMap.h>

namespace mcu = atmega2560;

static_assert(mcu::register_map::UDR3 == 0x136, "USART3 register");
