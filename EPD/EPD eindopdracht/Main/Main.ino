unsigned long previousMillis = 0;


void setup() {
  serialSetup();
  ledsSetup();
  servosetup();
  Buzzersetup();
  setupShiftRegister();
  button_Setup();
}

void loop() {
buttonLoop();
Stateloop();
}