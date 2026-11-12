# No runtime behavior

The ATmega2560 headers define compile-time hardware metadata only. They do not access volatile registers, install interrupt handlers, initialize peripherals or program fuses. Driver and board initialization code belongs to consuming firmware.
