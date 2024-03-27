unsigned long previousMillis = 0;

void setup() {
  ledsSetup();
  servosetup();
  Buzzersetup();
  setupShiftRegister();
       
}

void loop() {
  // ledsOranjeKlipper();
  ledsOranjeKlipper();
  ledsStoplichtNoord("ROOD");
  ledsStoplichtZuid("ROOD");
  ledsStoplichtNoord("GROEN");
  ledsStoplichtZuid("GROEN");
  aftellen();
  //  buzz();
  // buzzTrein();
 

  // servoDicht();


  //   for (int i = 0; i < FONTLENGTE; i++) {
  //     setShiftRegister(font[i]);
  //     delay(200);
  // }
}
