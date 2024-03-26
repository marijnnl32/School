
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


void leds_ledsAanOfUit(int a) {
  for (int i = 0; i < LEDPIN; i++) {
    digitalWrite(PINS[i], a);
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


// void eenUit(int a) {
//   for (int r = 7;r >= 0; r--) {
//     digitalWrite(pins[r], LOW);
//     delay(100);
//     for (int i = 7; i >= 0; i--) {
//       digitalWrite(pins[i], a);
//       delay(100);
//     }
//     digitalWrite(pins[r], a);
//   }
// }

void ledsOranjeKlipper() {
  // while(Treinwacht == true)
  Serial.println(millis());
  if (millis() >= previousMillis + interval) {
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
