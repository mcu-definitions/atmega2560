#include <atmega2560/Clock.h>

namespace mcu = atmega2560;

static_assert(mcu::clock::standard_max_cpu_hz_at_4v5 == 16000000UL, "Clock grade");
