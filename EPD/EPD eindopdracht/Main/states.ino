

void entryAllesOpRood() {
  resetSegmentTimer();
  buzzStop();
  ledsStoplichtZuid("ROOD");
  ledsStoplichtNoord("ROOD");
}

void doAllesOpRood() {
  //leeg
}

void exitAllesOpRood() {
  ledsStoplichtZuid("UIT");
  ledsStoplichtNoord("UIT");
}


void entryStoplichtNoordGroen() {
  serial_setTimer();
  setAutodetectie(1);
}

void doStoplichtNoordGroen() {
  ledsStoplichtZuid("ROOD");
  ledsStoplichtNoord("GROEN");
}

void exitStoplichtNoordGroen() {
  ledsStoplichtNoord("UIT");
}

void entryStoplichtNoordOranje() {
  serial_setTimer();
}

void doStoplichtNoordOranje() {
  ledsStoplichtZuid("ROOD");
  ledsStoplichtNoord("ORANJE");
}

void exitStoplichtNoordOranje() {
  ledsStoplichtNoord("UIT");
}

void entryTreinKomtEraanNoord() {
  serial_setTimer();
}

void doTreinKomtEraanNoord() {
  ledsStoplichtNoord("ORANJE");
  ledsStoplichtZuid("ROOD");
}

void exitTreinKomtEraanNoord() {
  ledsStoplichtNoord("UIT");
  ledsStoplichtZuid("UIT");
}

void entrySlachtboomSluiten() {
  ledsStoplichtZuid("ROOD");
  ledsStoplichtNoord("ROOD");
}

void doSlachtboomSluiten() {
  ledsOranjeKlipper();
  servoDicht();
  buzzTrein();
}

void exitSlachtboomSluiten() {
  ledsStoplichtNoord("UIT");
  ledsStoplichtZuid("UIT");
}

void entryStoplichtZuidGroen() {
  setAutodetectie(2);
  serial_setTimer();
}

void doStoplichtZuidGroen() {
  ledsStoplichtZuid("GROEN");
  ledsStoplichtNoord("ROOD");
}

void exitStoplichtZuidGroen() {
  ledsStoplichtZuid("UIT");
}

void entryStoplichtZuidOranje() {
  serial_setTimer();
}

void doStoplichtZuidOranje() {
  ledsStoplichtZuid("ORANJE");
  ledsStoplichtNoord("ROOD");
}

void exitStoplichtZuidOranje() {
  ledsStoplichtZuid("UIT");
}

void entryTreinKomtEraanZuid() {
  serial_setTimer();
}

void doTreinKomtEraanZuid() {
  ledsStoplichtZuid("ORANJE");
  ledsStoplichtNoord("ROOD");
}

void exitTreinKomtEraanZuid() {
  //leeg
}

void entrySlagboomsluiten() {
  ledsStoplichtNoord("ROOD");
  ledsStoplichtZuid("ROOD");
}

void doSlagboomsluiten() {
  ledsOranjeKlipper();
  servoDicht();
  buzzTrein();
}

void exitSlagboomsluiten() {
  ledsStoplichtNoord("UIT");
  ledsStoplichtZuid("UIT");
}


void entrySlachtboomDicht() {
  ledsStoplichtNoord("ROOD");
  ledsStoplichtNoord("ROOD");
}

void doSlachtboomDicht() {
  ledsOranjeKlipper();
}

void exitSlachtboomDicht() {
  ledsStoplichtNoord("UIT");
  ledsStoplichtZuid("UIT");
}


void entrySlachtboomOpenen() {
  ledsStoplichtNoord("ROOD");
  ledsStoplichtZuid("ROOD");
}

void doSlachtboomOpenen() {
  servoOpen();
  buzzTrein();
  ledsOranjeKlipper();
}

void exitSlachtboomOpenen() {
  ledsStoplichtNoord("UIT");
  ledsStoplichtZuid("UIT");
}

void entrySlachtboomOpen() {
  ledsStoplichtNoord("ROOD");
  ledsStoplichtZuid("ROOD");
  serial_setTimer();
}

void doSlachtboomOpen() {
  aftellen();
  buzzAfwachten();
  ledsOranjeKlipper();
}

void exitSlachtboomOpen() {
  addSlachtboomcount();
  Serial.println(slagboomcount);
  ledsStoplichtNoord("UIT");
  ledsStoplichtZuid("UIT");
  setTreinlangs();
  buzzStop();
}


void entryRust() {
  serial_setTimer();
  ledsStoplichtNoord("ROOD");
  ledsStoplichtZuid("ROOD");
}

void doRust() {
  // nothing
}

void exitRust() {
  ledsStoplichtNoord("UIT");
  ledsStoplichtZuid("UIT");
}
