#include <atmega2560/ADC.h>

namespace mcu = atmega2560;

static_assert(mcu::adc::external_channel_count == 16, "ATmega2560 ADC definition");
static_assert(static_cast<unsigned>(mcu::adc::MuxSelection::SingleEndedADC15) == 0x27, "ADC15 MUX selection");
static_assert(static_cast<unsigned>(mcu::adc::MuxSelection::DifferentialADC13_ADC10_Gain1) == 0x3D, "Differential MUX selection");
static_assert(mcu::adc::differential_gain_accuracy_min_supply_mv == 2700, "Differential gain supply limit");
