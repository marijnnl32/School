#include <Servo.h>
const int SERVOPIN = 6;
Servo servo;


void servosetup() {
  servo.attach(SERVOPIN);
  servo.write(90);
}


void servoFirstOpen() {
}


bool servoDicht() {
  unsigned long currentMillis = 0;
  int millisInterval = 20;
  int i = 90;
  while (i >= 0) {
  if (millis() >= currentMillis + millisInterval) {
    currentMillis = millis();
    servo.write(i);
    Serial.println(i);
    i--;
  }
}
return true;
}
