#include <Servo.h>
const byte SERVOPIN = 6;
Servo servo;


void servosetup() {
  servo.attach(SERVOPIN);
  servo.write(90);
}



void servoDicht() {
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
}


void servoOpen() {
  unsigned long currentMillis = 0;
  int millisInterval = 20;
  int i = 0;
  while (i <= 90) {
  if (millis() >= currentMillis + millisInterval) {
    currentMillis = millis();
    servo.write(i);
    Serial.println(i);
    i++;
  }

}
}

int servoRead(){

return servo.read();

}
