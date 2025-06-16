#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(9);  // Connect servo signal to pin 9
  myServo.write(0);   // Start position (assumes 0° holds the switch ON)
  delay(15000);       // Wait for 15 seconds before switching off
  myServo.write(90);  // Move to 90° to turn the switch OFF
  myServo.write(0);   // Goes back to initial position.
}

void loop() {
  
}
