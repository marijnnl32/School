


void LedControl_setup() {
  Serial.begin(9600);
  for (int i = 0; i < LEDPIN; i++) {
    pinMode(PINS[i], OUTPUT);
  }
}

void switchmax(){
switchspeed = min(switchspeed,1000);
switchspeed = max(switchspeed,50);
}

void ledControl_ledsAanOfUit(int a) {
  for (int i = 0; i < LEDPIN; i++) {
    digitalWrite(PINS[i], a);
    delay(switchspeed);
  }
}


void lightswitches() {
  switch (Lightmode) {
    case 1:
      lecControl_inputH();
      break;
    case 2:
      ledControl_ledsAanOfUit(HIGH);
      break;
    case 3:
      ledControl_ledsAanOfUit(LOW);
      break;
    case 4:
      ledControl_inputS();
      break;
  }
}

