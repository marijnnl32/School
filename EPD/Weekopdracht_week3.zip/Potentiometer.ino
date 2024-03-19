int PotentiometerPin = A1;

 void potentiometerRead(){

 int potValue = analogRead(PotentiometerPin);

  int graden = potValue / 2.8495821727;  

  if ((graden >= 315) || (graden <45)){
    Serial.println("N");
  }
  else if ( (graden >= 40) && (graden < 135) ){
    Serial.println("O");
  }
   else if ((graden >= 135) && (graden < 225)){
    Serial.println("Z");
  }
 else if ((graden >= 225) && (graden < 315)){
    Serial.println("W");
  }
  // een switch hier gebruiken zou sneller geweest zijn maar dit heb ik niet gedaan




 }