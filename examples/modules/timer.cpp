#include <atmega2560/Timer.h>

namespace mcu = atmega2560;

static_assert(mcu::timer::timer_count == 6, "ATmega2560 Timer definition");
