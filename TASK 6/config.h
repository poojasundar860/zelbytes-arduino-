#ifndef CONFIG_H
#define CONFIG_H

#define MOTOR_PWM_PIN  9
#define RELAY_PIN      8
#define ESTOP_PIN      2
#define LED_PIN        13

const int PWM_MIN = 0;
const int PWM_MAX = 255;

// ---------------- Relay Logic ----------------
// Change if your relay is active HIGH
#define RELAY_ON   LOW
#define RELAY_OFF  HIGH

#endif
