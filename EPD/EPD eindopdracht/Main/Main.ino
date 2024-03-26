
void setup() {
  ledsSetup();
  servosetup();
}

void loop() {
  // ledsOranjeKlipper();
  ledsOranjeKlipper();
  ledsStoplichtNoord("ROOD");
  ledsStoplichtZuid("ROOD");

  //   servoFirstOpen();

  // servoDicht();


  //   for (int i = 0; i < FONTLENGTE; i++) {
  //     setShiftRegister(font[i]);
  //     delay(200);
  // }
}
