# State Machine

## States

### IDLE

System monitors soil moisture and humidity.

### IRRIGATING

Relay turns ON and the valve waters the plant for 10 seconds.

### COOLDOWN

Relay turns OFF and the system waits for 5 seconds before checking again.

### FAULT

Triggered when the DHT22 sensor fails 3 consecutive readings. Irrigation is disabled and the LED blinks.

## Thresholds

* Moisture Threshold: 30%
* Irrigation Time: 10 seconds
* Cooldown Time: 5 seconds
* DHT Failure Limit: 3 readings

## Result

The system automatically irrigates when soil moisture falls below 30%, waits during cooldown, and enters a fault state if the DHT22 sensor fails repeatedly.

