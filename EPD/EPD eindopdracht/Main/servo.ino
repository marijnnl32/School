#include <Servo.h>
const int SERVOPIN = 5;
Servo servo;


void servosetup() {
  servo.attach(SERVOPIN);
}


void servoFirstOpen() {
  servo.write(180);
}


void servoDicht() {
  int currentMillis = 0;
  int millisInterval = 200;
  for (int i = 180; i >= 0; i--) {
    if (millis() >= currentMillis + millisInterval) {
      currentMillis = millis();
      servo.write(i);
      Serial.println("hoi");
    }
  }
}
