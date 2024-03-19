void getLicht() {
  int ldrValue = analogRead(ldrPin);             
  float voltage = ldrValue * (5.0 / 1023.0);     
  float resistance = (5.0 - voltage) / voltage;  
  float lux = 500 / resistance;                 
  
  // Serial.print("LDR Value: ");
  // Serial.print(ldrValue);
  // Serial.print(", Voltage: ");
  // Serial.print(voltage);
  // Serial.print("V, Resistance: ");
  // Serial.print(resistance);
  Serial.print(" ohms, Lux: ");
  Serial.println(lux);
}