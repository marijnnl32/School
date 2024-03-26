unsigned long previousMillis = 0;

void setup() {
  ledsSetup();
  servosetup();
  Buzzersetup();
}

void loop() {
  // ledsOranjeKlipper();
  ledsOranjeKlipper();
  ledsStoplichtNoord("ROOD");
  ledsStoplichtZuid("ROOD");
  // aftellen();
//  buzz();
//buzzFast();
  //   servoFirstOpen();

  // servoDicht();


  //   for (int i = 0; i < FONTLENGTE; i++) {
  //     setShiftRegister(font[i]);
  //     delay(200);
  // }
}
