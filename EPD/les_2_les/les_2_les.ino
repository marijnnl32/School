#include <Servo.h>
const int SERVOPIN = 10;
Servo servo;
int degrees;
int PotentiometerPin = A3;
int HeenEnWeerGraden = 1;
bool groteCheck = true;

void setup() {
  Serial.begin(9600);
  LedControl_setup();
  servo.attach(SERVOPIN);
  ledControl_ledsAanOfUit(HIGH);
}
void loop() {

  // servo.write(potentiometerRead());
  delay(5);  // dit mag natuurlijk niet, en dat gaan we in de lessen
  // dan ook oplossen!

  servo.write(heenEnWeer());
}


int potentiometerRead() {

  int potValue = analogRead(PotentiometerPin);

  degrees = map(potValue, 0, 1023, 0, 180);
  Serial.println(degrees);

  return degrees;
}



int heenEnWeer() {


  if (groteCheck == true) {

    HeenEnWeerGraden++;

    if (HeenEnWeerGraden >= 179) {
      groteCheck = !groteCheck;
    }
  }

  if (groteCheck == false) {
    HeenEnWeerGraden--;

    if (HeenEnWeerGraden == 0) {
      groteCheck = !groteCheck; 
    }
  }

  return HeenEnWeerGraden;
}




// EEPROM.write(0);
