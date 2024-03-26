

void serialSetup() {
  Serial.begin(9600);
}


bool setTimer(int a){
  previousMillis = millis();
  int interval = a;
  
  if (millis() >= previousMillis + interval) {

    return true;
  }

  else {
    return false;
 
  }
}