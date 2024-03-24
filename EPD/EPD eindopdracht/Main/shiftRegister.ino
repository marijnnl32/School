const int shiftRegister_PIN_DS = 10;
const int shiftRegister_PIN_STCP = 9;
const int shiftRegister_PIN_SHCP = 8;
 
void setupShiftRegister() {
  pinMode(shiftRegister_PIN_DS, OUTPUT);
  pinMode(shiftRegister_PIN_STCP, OUTPUT);
  pinMode(shiftRegister_PIN_SHCP, OUTPUT);
}
 
void clearShiftRegister() {
  setShiftRegister(B00000000);
}
 
void AllOnShiftRegister() {
  setShiftRegister(B11111111);
}
 
void setShiftRegister(byte pattern) {
  for (int index = 0; index < 8; index++) {
    bitRead(pattern, index) ? digitalWrite(shiftRegister_PIN_DS, HIGH) : digitalWrite(shiftRegister_PIN_DS, LOW);
    digitalWrite(shiftRegister_PIN_SHCP, HIGH);
    digitalWrite(shiftRegister_PIN_SHCP, LOW);
  }
  digitalWrite(shiftRegister_PIN_STCP, HIGH);
  digitalWrite(shiftRegister_PIN_STCP, LOW);
}