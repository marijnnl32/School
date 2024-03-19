const int LEDPIN = 8;
const int PINS[] = { 13, 12, 11, 10, 9, 8, 7, 6 };

int switchspeed = 500;
int switchDifrence = 50;
int Lightmode = 0;

void buttoncheck() {
  if (Serial.available() > 0) {
    char command = Serial.read();

    switch (command) {
      case 'h':
      case 'H':
        Lightmode = 1;
        Serial.println("LED heenEnWeer");
        break;
      case 'A':
      case 'a':
        Lightmode = 2;
        Serial.println("LED AAN");
        break;
      case 'U':
      case 'u':
        Lightmode = 3;
        Serial.println("LED UIT");
        break;
      case 's':
      case 'S':
        Lightmode = 4;
        Serial.println("LED samen");
        break;
      case '+':
        switchspeed -= switchDifrence;
        Serial.println("LED snel");
        break;
      case '-':
        switchspeed += switchDifrence;
        Serial.println("LED sloom");
        break;
    }
  }
}


void ledControl_inputS() {
  for (int i = 0; i < LEDPIN / 2; i++) {
    digitalWrite(PINS[i], HIGH);
    digitalWrite(PINS[LEDPIN - 1 - i], HIGH);
    delay(switchspeed);
    digitalWrite(PINS[i], LOW);
    digitalWrite(PINS[LEDPIN - 1 - i], LOW);


  }
  for (int i = 0; i < LEDPIN; i++) {
    digitalWrite(PINS[i], LOW);
  }
}

void lecControl_inputH() {
  for (int i = 0; i < LEDPIN; i++) {
    digitalWrite(PINS[i], HIGH);
    delay(switchspeed);
    digitalWrite(PINS[i], LOW);
  }
}