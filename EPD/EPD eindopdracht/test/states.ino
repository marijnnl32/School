// IN ASTHA
// VERANDER NAAM VAN STOPLICHT ORANE  TREIN KOMT ER AAN EN
//DE IF VAN SERVOREAD VERANDEREN



//DINGEN TE VERANDEREN
//


void entryAllesOpRood() {
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
  autodetectieNoord = false;
}

void doStoplichtNoordGroen() {
  ledsStoplichtNoord("GROEN");
}

void exitStoplichtNoordGroen() {
  ledsStoplichtNoord("UIT");
  Serial.println("hoihoi fgsdd");
}




void entryStoplichtNoordOranje() {
  serial_setTimer();
}

void doStoplichtNoordOranje() {
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
}

void exitTreinKomtEraanNoord() {
  ledsStoplichtNoord("UIT");
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
  autodetectieZuid = false;
  serial_setTimer();
}

void doStoplichtZuidGroen() {
  ledsStoplichtZuid("GROEN");
}

void exitStoplichtZuidGroen() {
  ledsStoplichtZuid("UIT");
}

void entryStoplichtZuidOranje() {
  serial_setTimer();
}

void doStoplichtZuidOranje() {
  ledsStoplichtZuid("ORANJE");
}

void exitStoplichtZuidOranje() {
  ledsStoplichtZuid("UIT");
}



void entryTreinKomtEraanZuid() {
  serial_setTimer();
}

void doTreinKomtEraanZuid() {
  ledsStoplichtZuid("ORANJE");
}

void exitTreinKomtEraanZuid() {
  //leeg
}

void entrySlagboomsluiten() {
  serial_setTimer();
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
  ledsStoplichtZuid("ROOD");
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
  slagboomcount++;
  Serial.println(slagboomcount);
  ledsStoplichtNoord("UIT");
  ledsStoplichtZuid("UIT");
  treinVoorbij = false;
  treinDetectie = false;
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
