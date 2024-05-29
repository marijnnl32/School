#include <Servo.h>
int servoLoc = 90;
const byte SERVOPIN = 6;
bool isServoClosed = false;
Servo servo;
unsigned long currentMillis = millis();



void servoSetup() {
  servo.attach(SERVOPIN);
  servo.write(90);
}

void servoDicht() {
  int millisInterval = 30;
  unsigned long currentMillis = millis();
  if (currentMillis >= previousMillis + millisInterval) {
    servoLoc--;
    servo.write(servoLoc);
    Serial.println(servoLoc);
    previousMillis = currentMillis;
  }
}

void servoOpen() {
  int millisInterval = 30;
  unsigned long currentMillis = millis();
  if (currentMillis >= previousMillis + millisInterval) {
    servoLoc++;
    servo.write(servoLoc);
    Serial.println(servoLoc);
    previousMillis = currentMillis;
  }
}

bool servoOpened() {
  if (servoLoc >= 90) {
    return true;
  } else {
    return false;
  }
}

bool servoClosed() {
  if (servoLoc <= 0) {
    return true;
  } else {
    return false;
  }
}
