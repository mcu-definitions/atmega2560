#include <atmega2560/PinFunctions.h>

namespace mcu = atmega2560;

static_assert(mcu::pin::capabilities::PB0 != 0, "ATmega2560 PinFunctions definition");
