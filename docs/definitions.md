# Definitions model

Each header contains hardware names, enum values, pin masks, register addresses, memory sizes, or device capabilities. It does not implement drivers or register access.

## Interface

Projects choose `namespace mcu = atmega2560;` and access the device definitions through the module namespaces.

ATmega2560-specific features include four USART modules, six timers, additional GPIO ports, JTAG and external memory support.

## Address spaces

GPIO names encode physical MCU ports, not Arduino pin identifiers. `register_map` uses data-space addresses (`PORTB == 0x25`); AVR `IN`/`OUT` offsets are different for the low I/O space.

## Data sources

The module pages refer to the official ATmega2560 datasheet. Package-dependent information is organized by the package selected in `MCUConfig.h`.
