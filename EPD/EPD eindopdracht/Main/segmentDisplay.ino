

const int FONTLENGTE = 16;
byte font[]{
  B11111100,  // 0
  B01100000,  // 1
  B11011010,  // 2
  B11110010,  // 3
  B01100110,  // 4
  B10110110,  // 5
  B10111110,  // 6
  B11100000,  // 7
  B11111110,  // 8
  B11110110,  // 9
  B11101110,  // A
  B00111110,  // b
  B10011100,  // C
  B01111010,  // d
  B10011110,  // E
  B10001110,  // F
};



void aftellen() {
  unsigned long previousMillis = 0;
  int interval = 1000;
  int i = 5;

  while (i >= 0) {
    if (millis() >= previousMillis + interval) {
      previousMillis = millis();

      setShiftRegister(font[i]);

      Serial.println(i);
      i--;
    }
  }
}