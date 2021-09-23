#include <Servo.h>

Servo s;     // create servo object to control the servos.

// Servo range is 0-180, so 90 is the middle value that corresponds to 1.5ms pulse.
int mid = 90;

void setup() {
  // Attach the servo on pin 9
  s.attach(9, 1000, 2000); // (pin, min pulse width, max pulse width in microseconds) 
}

void loop() {
  s.write(mid);
}
