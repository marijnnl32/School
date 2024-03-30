int Serial_PreviousTimer = 0;
int slagboomcount = 0;

void serialSetup() {
  Serial.begin(9600);
}

void serialResetslagboomcount(){
char command = Serial.read();

if(command == 'r' || 'R'){
slagboomcount = 0;
}
}




void serial_setTimer() {
  Serial_PreviousTimer = millis();
}

int serial_getTimer() {
  return millis() - Serial_PreviousTimer;
}


