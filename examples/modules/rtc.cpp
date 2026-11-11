#include <atmega2560/RTC.h>

namespace mcu = atmega2560;

static_assert(mcu::rtc::tosc1_pin_value == 0x64, "ATmega2560 RTC definition");
