byte statenumber = 0;
bool treinVoorbij = false;
bool treinDetectie = false;
bool autodetectieNoord = false;
bool autodetectieZuid = false;
int kortePauze = 2000;
int langePauze = 5000;
const int allesOpRood = 0;
const  int stoplichtNoordGroen = 1;
const int stoplichtZuidGroen = 2;
const int stoplichtNoordOranje = 3;
const int stoplichtZuidOranje = 4;
const int rust = 5;
const int treinKomtEraanNoord = 6;
const int treinKomtEraanZuid = 7;
const int slachtboomSluiten = 8;
const int slachtboomDicht = 9;
const int slachtboomOpenen = 10;
const int SlachtboomOpen = 11;

void setAutodetectie(int i) {
  if (i == 1) {
    autodetectieNoord = false;
  } else if (i == 2) {
    autodetectieZuid = false;
  }
}

void setTreinlangs() {
  treinVoorbij = false;
  treinDetectie = false;
}




void Stateloop() {
  // Serial.println(statenumber);
  switch (statenumber) {

    case 0:
      entryAllesOpRood();
      if (autodetectieNoord == true) {
        exitAllesOpRood();
        entryStoplichtNoordGroen();
        statenumber = stoplichtNoordGroen;
      }

      else if (autodetectieZuid == true) {
        exitAllesOpRood();
        statenumber = stoplichtZuidGroen;
        entryStoplichtZuidGroen();

      }

      else if (treinDetectie == true) {
        exitAllesOpRood();
        statenumber = treinKomtEraanZuid;
        entrySlagboomsluiten();
      }
      break;

    case stoplichtNoordGroen:

      doStoplichtNoordGroen();
      if (serial_getTimer() >= langePauze + potentiometerMillis()) {
        exitStoplichtNoordGroen();
        statenumber = stoplichtNoordOranje;
        entryStoplichtNoordOranje();

      } else if (treinDetectie == true) {
        exitStoplichtNoordGroen();
        statenumber = treinKomtEraanNoord;
        entryTreinKomtEraanNoord();
      }
      break;

    case stoplichtZuidGroen:
      doStoplichtZuidGroen();
      if (serial_getTimer() >= langePauze + potentiometerMillis()) {
        exitStoplichtZuidGroen();
        statenumber = stoplichtZuidOranje;
        entryStoplichtZuidOranje();
      } else if (treinDetectie == true) {
        exitStoplichtZuidGroen();
        statenumber = treinKomtEraanZuid;
        entryTreinKomtEraanZuid();
      }
      break;

    case stoplichtNoordOranje:
      doStoplichtNoordOranje();
      if (serial_getTimer() >= kortePauze) {
        exitStoplichtNoordOranje();
        statenumber = rust;
        entryRust();
      } else if (treinDetectie == true) {
        exitStoplichtNoordOranje();
        statenumber = treinKomtEraanNoord;
        entryTreinKomtEraanNoord();
      }
      break;

    case stoplichtZuidOranje:
      doStoplichtZuidOranje();
      if (serial_getTimer() >= kortePauze) {
        exitStoplichtZuidOranje();
        statenumber = rust;
        entryRust();
      } else if (treinDetectie == true) {
        exitStoplichtZuidOranje();
        statenumber = treinKomtEraanZuid;
        entryTreinKomtEraanZuid();
      }
      break;

    case rust:
      doRust();
      if (serial_getTimer() >= kortePauze) {
        exitRust();
        statenumber = 0;
        entryAllesOpRood();
      }
      break;

    case treinKomtEraanNoord:
      doTreinKomtEraanNoord();
      if (serial_getTimer() >= kortePauze) {
        exitTreinKomtEraanNoord();
        statenumber = slachtboomSluiten;
        entrySlagboomsluiten();
      }

    case treinKomtEraanZuid:
      doTreinKomtEraanZuid();
      if (serial_getTimer() >= kortePauze) {
        exitTreinKomtEraanZuid();
        statenumber = slachtboomSluiten;
        entrySlagboomsluiten();
      }
      break;

    case slachtboomSluiten:
      doSlachtboomSluiten();
      if (servoClosed() == true) {
        exitSlachtboomSluiten();
        statenumber = slachtboomDicht;
        entrySlachtboomDicht();
      }
      break;

    case slachtboomDicht:
      doSlachtboomDicht();
      if (treinVoorbij == true) {
        exitSlachtboomDicht();
        statenumber = slachtboomOpenen;
        entrySlachtboomOpenen();
      }
      break;

    case slachtboomOpenen:
      doSlachtboomOpenen();
      if (servoOpened()) {
        exitSlachtboomOpenen();
        statenumber = 11;
        entrySlachtboomOpen();
      }
      break;

    case 11:
      doSlachtboomOpen();
      if (getIstimerKlaar() == true) {
        exitSlachtboomOpen();
        statenumber = 0;
      }
  }
}
