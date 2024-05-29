
int countdownSegment = 5;
bool isTimerklaar = false;
int nowinterval = 0;

const int FONTLENGTE = 16;
byte font[]{
  B11111100,  // 0
  B01100000,  // 1
  B11011010,  // 2
  B11110010,  // 3
  B01100110,  // 4
  B10110110,  // 5
};

void resetSegmentTimer() {
  isTimerklaar = false;
}
bool getIstimerKlaar(){
return isTimerklaar;
}
void aftellen() {

  int interval = 1000;

  if (millis() >= nowinterval + interval) {
    if (countdownSegment >= 0) {
      setShiftRegister(font[countdownSegment]);

      Serial.println(countdownSegment);
      countdownSegment--;

      nowinterval = millis();

    } else {
      countdownSegment = 5;
      isTimerklaar = true;
    }
  }
}