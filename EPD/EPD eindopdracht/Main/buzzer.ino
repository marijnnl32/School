int BUZZER_PIN = 4;

void Buzzersetup() {
  pinMode(BUZZER_PIN, OUTPUT); // Set the buzzer pin as an output
}

void buzz() {
  // Emit a tone of 1000Hz for 500 milliseconds
   for(int i = 0; i < 3; i++) {
    tone(BUZZER_PIN, 1000);
    delay(100);
    noTone(BUZZER_PIN);
    delay(100);
  }
  // Stop the tone for 500 milliseconds
  noTone(BUZZER_PIN);
  delay(1000);
}

void buzzFast(){
   tone(BUZZER_PIN, 1000);
    delay(100);
    noTone(BUZZER_PIN);
    delay(50);

}
