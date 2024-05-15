int PotentiometerPin = A4;


int potentiometerRead() {

  int potValue = analogRead(PotentiometerPin);

  int degrees = map(potValue, 0, 1023, 0, 5000);
  Serial.println(degrees);

  return degrees;
}
