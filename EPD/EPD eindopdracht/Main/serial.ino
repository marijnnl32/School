int serialPreviousTimer = 0;
int slagboomcount = 0;

void addSlachtboomcount() {
  slagboomcount++;
}
void serialSetup() {
  Serial.begin(9600);
}

void serialResetslagboomcount() {
  char command = Serial.read();

  if (command == 'r' || 'R') {
    slagboomcount = 0;
  }
}

void serial_setTimer() {
  serialPreviousTimer = millis();
}

int serial_getTimer() {
  return millis() - serialPreviousTimer;
}
