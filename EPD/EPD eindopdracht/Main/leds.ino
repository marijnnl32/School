const int LEDPIN = 6;
const int PINS[] = { A0, A1, A2, A3, A4, A5 };
const int ORANJENOORD = PINS[1];
const int ORANJEZUID = PINS[4];
bool oranjeAan = false;
int interval = 300;


void ledsSetup() {
  Serial.begin(9600);
  for (int i = 0; i < LEDPIN; i++) {
    pinMode(PINS[i], OUTPUT);
  }
}




void ledsStoplichtNoord(String a) {
  if (a == "ROOD") {
    digitalWrite(PINS[2], HIGH);
  } else if (a == "ORANJE") {
    digitalWrite(PINS[1], HIGH);
  }

  else if (a == "GROEN") {
    digitalWrite(PINS[0], HIGH);
  }

  else if (a == "UIT") {
    for (int i = 3; i < 6; i++){
      digitalWrite(PINS[i], LOW);
  }
}
}

void ledsStoplichtZuid(String a) {
  if (a == "ROOD") {
    digitalWrite(PINS[5], HIGH);
  } else if (a == "ORANJE") {
    digitalWrite(PINS[4], HIGH);
  }

  else if (a == "GROEN") {
    digitalWrite(PINS[3], HIGH);

  } else if (a == "UIT") {
    for (int i = 3; i < 6; i++){
      digitalWrite(PINS[i], LOW);
  }
  }
}




void ledsOranjeKlipper() {  
  if (millis() >= previousMillis + buzzer_interval) {
    previousMillis = millis();
    if (oranjeAan == false) {
      digitalWrite(PINS[1], HIGH);
      digitalWrite(PINS[4], HIGH);
      oranjeAan = true;
    } else if (oranjeAan == true) {
      digitalWrite(PINS[1], LOW);
      digitalWrite(PINS[4], LOW);
      oranjeAan = false;
    }
  }
}