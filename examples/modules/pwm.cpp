#include <atmega2560/PWM.h>

namespace mcu = atmega2560;

static_assert(mcu::pwm::channel_count == 16, "ATmega2560 PWM definition");
