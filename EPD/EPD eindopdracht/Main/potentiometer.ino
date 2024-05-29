int PotentiometerPin = A4;


void potentiometerSetup() {
  pinMode(PotentiometerPin, INPUT);
}

int potentiometerMillis() {

  int potValue = analogRead(PotentiometerPin);

  int extraMillis = map(potValue, 0, 1023, 0, 2000);
  Serial.println(extraMillis);

  return extraMillis;
}
