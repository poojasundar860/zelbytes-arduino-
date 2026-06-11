#ifndef CONFIG_H
#define CONFIG_H

// ---------------- Pin Definitions ----------------
#define SOIL_PIN    A0
#define RELAY_PIN   8
#define LED_PIN     13

// ---------------- Soil Calibration ----------------
// Adjust these after calibration
const int DRY_VALUE = 850;
const int WET_VALUE = 250;

// ---------------- Irrigation Threshold ----------------
const int MOISTURE_THRESHOLD = 30;

// ---------------- Relay Logic ----------------
// Active LOW Relay Module
#define RELAY_ON    LOW
#define RELAY_OFF   HIGH

#endif
