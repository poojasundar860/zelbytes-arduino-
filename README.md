 TASK 1- Blink

 Objective

Verify Arduino IDE installation and board communication.

 Hardware

* Arduino Uno
* USB Cable

 Result

The onboard LED blinked successfully after uploading the Blink sketch.

# TASK 2 :Digital I/O, Debouncing & Serial Debugging

## Objective

To control an LED using a push button and practice Serial debugging.

## Components

* Arduino Uno
* LED
* 220 Ω Resistor
* Push Button

## Features

* LED toggle using button press.
* Button debouncing with `millis()`.
* Press count displayed on Serial Monitor.
* Serial commands: `?`, `l`, `o`.
* Debug messages using `#ifdef DEBUG`.

## Conclusion

Successfully implemented digital I/O, button debouncing, and Serial debugging techniques using Arduino.

# Task 3: Manual Irrigation Toggle

## Objective

To manually control a solenoid valve using a relay module, push button, and serial commands.

## Components

* Arduino Uno
* Relay Module
* Solenoid Valve
* Push Button
* LED

## Features

* Safe valve OFF state at startup.
* Momentary irrigation (valve open while button is held).
* Serial status command (`s`).
* Emergency stop support.
* Event logging using `millis()`.

## Conclusion

The relay-controlled irrigation system was successfully implemented. The valve operated safely through manual button control and serial monitoring, following recommended safety practices.

