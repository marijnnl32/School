
void entryAllesOpRood() {
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
  setTimer(5000);
}

void doStoplichtNoordGroen() {
  ledsStoplichtNoord("GROEN");
}

void exitStoplichtNoordGroen() {
  ledsStoplichtNoord("UIT");
}




void entryStoplichtNoordOranje() {
  setTimer(2000);
}

void doStoplichtNoordOranje() {
  ledsStoplichtNoord("ORANJE");
}

void exitStoplichtNoordOranje() {
  setTimer(2000);
}


void entryTreinKomtEraanNoord() {
  //leeg
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
  setTimer(5000);
}

void doStoplichtZuidGroen() {
  ledsStoplichtZuid("GROEN");
}

void exitStoplichtZuidGroen() {
  ledsStoplichtZuid("UIT");
}

void entryStoplichtZuidOranje() {
  setTimer(2000);
}

void doStoplichtZuidOranje() {
  ledsStoplichtNoord("ORANJE");
}

void exitStoplichtZuidOranje() {
  ledsStoplichtNoord("UIT");
}



void entryTreinKomtEraanZuid() {
  setTimer(2000);
}

void doTreinKomtEraanZuid() {
  ledsStoplichtZuid("ORANJE");
}

void exitTreinKomtEraanZuid() {
  //leeg
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
  // ServoOpen();
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
}

void doSlachtboomOpen() {
  aftellen();
  buzz();
  ledsOranjeKlipper();
}

void exitSlachtboomOpen() {
  ledsStoplichtNoord("UIT");
  ledsStoplichtZuid("UIT");
}


void entryRust() {
  Settimer()
    StoplichtNoord("ROOD")
      StoplichtZuid("ROOD")
}

void doRust() {
  // nothing
}

void exitRust() {
  ledsStoplichtNoord("UIT");
  ledsStoplichtZuid("UIT");
}
