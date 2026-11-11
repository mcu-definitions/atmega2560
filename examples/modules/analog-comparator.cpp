#include <atmega2560/AnalogComparator.h>

namespace mcu = atmega2560;

static_assert(mcu::analog_comparator::positive_input_pin_value == 0x42, "ATmega2560 AnalogComparator definition");
