# ADC.h

**Purpose:** ADC channels, multiplexer selections, references and modes.

Namespace: `atmega2560::adc`.

The ATmega2560 has a 10-bit ADC with 16 single-ended external inputs. ADC0–ADC7 map to PF0–PF7; ADC8–ADC15 map to PK0–PK7. `MuxSelection` contains every valid MUX5:0 encoding from datasheet Table 26-4.

```cpp
#include <atmega2560/ADC.h>

namespace mcu = atmega2560;

static_assert(mcu::adc::external_channel_count == 16, "ATmega2560 ADC definition");
static_assert(static_cast<unsigned>(mcu::adc::MuxSelection::SingleEndedADC15) == 0x27, "ADC MUX definition");
static_assert(static_cast<unsigned>(mcu::adc::MuxSelection::DifferentialADC13_ADC10_Gain1) == 0x3D, "ADC differential MUX definition");
```

## External channels and references

| Channels | MCU pins |
|---|---|
| ADC0–ADC7 | PF0–PF7 |
| ADC8–ADC15 | PK0–PK7 |

`Reference` encodings are `AREF = 0`, `AVCC = 1`, internal 1.1 V = 2, and internal 2.56 V = 3.

## Multiplexer selections

| MUX5:0 | Selection |
|---|---|
| `0x00–0x07` | Single-ended ADC0–ADC7 |
| `0x08–0x0F` | Differential ADC0/1 and ADC2/3 pairs, gain 10x or 200x |
| `0x10–0x1D` | Differential ADC0–ADC7 inputs, gain 1x, against ADC1 or ADC2 |
| `0x1E` | Internal 1.1 V bandgap |
| `0x1F` | Ground |
| `0x20–0x27` | Single-ended ADC8–ADC15 |
| `0x28–0x2F` | Differential ADC8/9 and ADC10/11 pairs, gain 10x or 200x |
| `0x30–0x3D` | Differential ADC8–ADC15 inputs, gain 1x, against ADC9 or ADC10 |
| `0x3E–0x3F` | Reserved; not exposed as enum values |

The datasheet gives expected resolutions of 8 bits at 1x and 10x, and 7 bits at 200x. The 10x and 200x differential gain settings should not be used below 2.7 V when the specified accuracy is required.

`TriggerSource` encodings map to ADTS2:0. `MuxSelection` encodings map to MUX5:0, with MUX5 located in ADCSRB and MUX4:0 in ADMUX.

These are hardware definitions, not runtime register access or initialization.

Source: [ATmega2560 datasheet (DS40002211A)](../datasheet/datasheet.pdf), Sections 26.7–26.8, Table 26-4.
