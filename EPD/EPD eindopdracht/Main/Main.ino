unsigned long previousMillis = 0;


void setup() {
  serialSetup();
  ledsSetup();
  servoSetup();
  Buzzersetup();
  setupShiftRegister();
  button_Setup();
  potentiometerSetup();
}

void loop() {
  buttonLoop();
  Stateloop();
}