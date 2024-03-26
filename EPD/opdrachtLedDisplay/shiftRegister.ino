const int PIN_DS = 10;
const int PIN_STCP = 9;
const int PIN_SHCP = 8;
 
void setupShiftRegister() {
  pinMode(PIN_DS, OUTPUT);
  pinMode(PIN_STCP, OUTPUT);
  pinMode(PIN_SHCP, OUTPUT);
}
 
void clearShiftRegister() {
  setShiftRegister(B00000000);
}
 
void AllOnShiftRegister() {
  setShiftRegister(B11111111);
  Serial.println("test");
}
 
void setShiftRegister(byte pattern)
{
  digitalWrite(PIN_STCP, LOW);

  for(int i = 0; i < 8; i++)
  { 
    digitalWrite(PIN_SHCP, LOW);
    digitalWrite(PIN_DS, bitRead(pattern, i));
    digitalWrite(PIN_SHCP, HIGH);
  }
  digitalWrite(PIN_STCP, HIGH);
}