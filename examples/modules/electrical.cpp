#include <atmega2560/Electrical.h>

namespace mcu = atmega2560;

static_assert(mcu::electrical::standard::max_cpu_frequency_hz == 16000000UL, "ATmega2560 Electrical definition");
static_assert(mcu::electrical::absolute_maximum::max_vcc_mv == 6000, "Absolute VCC limit");
static_assert(mcu::electrical::absolute_maximum::max_dc_current_per_io_pin_ma == 40, "Absolute I/O current limit");
