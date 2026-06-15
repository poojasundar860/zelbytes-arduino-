# Wiring Notes

## Connections

* Motor Driver PWM → D9
* Relay IN → D8
* E-Stop Button → D2
* LED → D13

## Power

* Relay VCC → 5V
* Relay GND → GND
* Motor Driver GND → Arduino GND
* Motor powered by external supply

## Notes

* D2 is used as an interrupt pin for the E-Stop button.
* Pressing E-Stop immediately stops the motor and closes the valve.
* Motor speed is controlled using PWM values (0–255).
* All grounds must be connected together.

