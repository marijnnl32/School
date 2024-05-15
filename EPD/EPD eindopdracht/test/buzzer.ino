int BUZZER_PIN = 4;
unsigned long buzzer_interval = 100;
bool buzzState = LOW;

void Buzzersetup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

void buzzAfwachten() {

  byte buzzCount = 0;
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= buzzer_interval) {
    previousMillis = currentMillis;

    if (buzzCount < 3) {
      if (buzzState == LOW) {
        tone(BUZZER_PIN, 1000);
        buzzState = HIGH;
      } else {
        noTone(BUZZER_PIN);
        buzzState = LOW;
        buzzCount++;
      }
    } else {
      noTone(BUZZER_PIN);
      buzzCount = 0;
    }
  }
}

void buzzTrein() {
  static unsigned long previousBuzzMillis = 0;
  unsigned long currentMillis = millis();

  if (currentMillis - previousBuzzMillis >= buzzer_interval) {
    previousBuzzMillis = currentMillis;


    if (buzzState == LOW) {
      tone(BUZZER_PIN, 1000);
      buzzState = HIGH;
    } else {
      noTone(BUZZER_PIN);
      buzzState = LOW;
    }
  }
}

void buzzStop() {
  noTone(BUZZER_PIN);
}
