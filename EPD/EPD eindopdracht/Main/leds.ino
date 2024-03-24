
const int ledpin = 6;
const int pins[] = {A0,A1,A2,A3,A4,A5};

void ledsSetup() {
  Serial.begin(9600);
  for (int i = 0; i < ledpin; i++) {
    pinMode(pins[i], OUTPUT);
    delay(1000);
  }
}


void leds_ledsAanOfUit(int a) {
  for (int r = 0; r < ledpin; r++) {
    digitalWrite(pins[r], LOW);
    delay(100);
    for (int i = 0; i < ledpin; i++) {
      digitalWrite(pins[i], a);
      delay(100);
    }
    digitalWrite(pins[r], a);
  }
}

void eenUit(int a) {
  for (int r = 7;r >= 0; r--) {
    digitalWrite(pins[r], LOW);
    delay(100);
    for (int i = 7; i >= 0; i--) {
      digitalWrite(pins[i], a);
      delay(100);
    }
    digitalWrite(pins[r], a);
  }
}


