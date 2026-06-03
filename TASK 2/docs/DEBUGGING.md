## Port Issues

* Incorrect COM port selected in Arduino IDE.
* USB cable supports power only and not data transfer.
* Loose or damaged USB connection.
* Missing USB-to-serial drivers.
* Another application is using the serial port.

## Baud Rate Issues

* Serial Monitor baud rate does not match `Serial.begin()` setting.
* Garbled or unreadable characters appear in the Serial Monitor.
* No output is displayed due to incorrect baud rate selection.
* Common baud rates used: 9600 and 115200.

## Brownout Symptoms

* Arduino resets unexpectedly.
* Startup messages repeatedly appear in the Serial Monitor.
* LED flickers or behaves erratically.
* Program execution restarts randomly.
* USB connection disconnects when high-current devices are activated.
* System becomes unstable due to insufficient power supply voltage.

