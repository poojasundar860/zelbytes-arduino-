 # TASK 1- Blink

## Objective

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

# Task 4: Multi-Sensor Logging

## Objective

To integrate multiple sensors and log environmental data in CSV format using Arduino.

## Components

* Arduino Uno
* DHT22 Sensor
* Soil Moisture Sensor
* LDR
* HC-SR04 Ultrasonic Sensor

## Features

* Temperature and humidity monitoring.
* Soil moisture measurement.
* Light intensity measurement.
* Distance measurement using ultrasonic sensor.
* CSV data logging through Serial Monitor.

## CSV Format

timestamp, ldr, temp, humidity, distance, soil

## Conclusion

All sensors were successfully integrated into a single system. Sensor data was collected and logged in CSV format for monitoring and analysis.


# Task 5: Threshold Logic & State Machine

## Objective

To automate irrigation using soil moisture thresholds and a state machine.

## Components

* Arduino Uno
* Soil Moisture Sensor
* DHT22 Sensor
* Relay Module
* Solenoid Valve
* LED

## States

* IDLE
* IRRIGATING
* COOLDOWN
* FAULT

## Features

* Automatic irrigation based on soil moisture.
* Cooldown period after irrigation.
* DHT22 fault detection.
* Relay-controlled valve operation.
* Serial monitoring of state transitions.

## Conclusion

A state-machine-based irrigation controller was implemented successfully. The system automatically irrigates when soil moisture is low and safely enters FAULT mode if sensor errors occur.

# Task 6: PWM Motor & Interrupt E-Stop

## Objective

To control a DC motor using PWM and implement an interrupt-based emergency stop system.

## Components

* Arduino Uno
* DC Motor
* Motor Driver Module
* Relay Module
* Solenoid Valve
* Push Button (E-Stop)
* LED

## Features

* PWM motor speed control (0–255).
* Speed control through Serial Monitor.
* Interrupt-driven Emergency Stop.
* Relay-controlled valve shutdown.
* Safe motor and valve operation.

## Conclusion

The DC motor speed was successfully controlled using PWM. The E-Stop button immediately stopped the motor and closed the valve through an interrupt, ensuring safe operation of the irrigation system.

# Task 7: Interrupts & Data Logging

## Objective

To implement interrupt-based button handling and log sensor data in CSV format for monitoring and analysis.

## Components

* Arduino Uno
* Push Button
* LED
* DHT22 Sensor
* Soil Moisture Sensor
* LDR

## Features

* External interrupt using `attachInterrupt()`.
* ISR sets a volatile event flag.
* Debouncing handled in `loop()`.
* CSV data logging through Serial Monitor.
* Timestamped sensor records using `millis()`.

## CSV Format

timestamp,temp,humidity,soil,light

## Conclusion

Interrupt-driven event handling and CSV data logging were successfully implemented. The system responded quickly to button events while continuously recording sensor data for analysis.

# Task 8: Zelbytes IoT Lab

## Objective

Upload telemetry data from the bench to the Zelbytes IoT Learning Lab cloud.

## Components

* Arduino Uno
* USB Connection
* Python Host Script

## Features

* Reads sensor values from Serial.
* Uploads telemetry to IoT Lab API.
* Uses API key stored in `secrets.h`.
* Dashboard displays uploaded samples.

## Submission

* secrets.h.example
* Device ID used
* Dashboard screenshot with 10+ samples

# Task 9: Automated Grow-Bench Prototype

## Objective

Develop an automated irrigation system with soil-based control and manual override.

## Components

* Arduino Uno
* Soil Moisture Sensor
* Relay Module
* Solenoid Valve
* Push Button
* LED

## Features

* Automatic irrigation using soil moisture threshold.
* Manual override button.
* Serial commands:

  * STATUS
  * FORCE_ON
  * FORCE_OFF
* Relay-controlled valve operation.

## Conclusion

The automated grow-bench prototype successfully combined sensing, control, and manual override features into a single irrigation system.
