byte satenumber = 0;
bool treinVoorbij = false;
bool treinDetectie = false;
bool autodetectieNoord = false;
bool autodetectieZuid = false;


void Stateloop() {
  switch (satenumber) {

    case 0:
      entryAllesOpRood();
      if (autodetectieNoord == true) {
        exitAllesOpRood();
        entryStoplichtNoordGroen();
        satenumber = 1;
      }

      else if (autodetectieZuid == true) {
        exitAllesOpRood();
        satenumber = 2;
        entryStoplichtZuidGroen();

      }

      else if (treinDetectie == true) {
        exitAllesOpRood();
        satenumber = 8;
        entrySlagboomsluiten();
      }
      break;

    case 1:
      doStoplichtNoordGroen();
      if (serial_getTimer() >= 5000) {
        exitStoplichtNoordGroen();
        satenumber = 3;
        entryStoplichtNoordOranje();

      } else if (treinDetectie == true) {
        exitStoplichtNoordGroen();
        satenumber = 6;
        entryTreinKomtEraanNoord();
      }

    case 2:
      doStoplichtZuidGroen();
      if (serial_getTimer() >= 5000) {
        exitStoplichtZuidGroen();
        satenumber = 4;
        entryStoplichtZuidOranje();
      } else if (treinDetectie == true) {
        exitStoplichtZuidGroen();
        satenumber = 7;
        entryTreinKomtEraanZuid();
      }
      break;

    case 3:
      doStoplichtNoordOranje();
      if (serial_getTimer() >= 2000) {
        exitStoplichtNoordOranje();
        satenumber = 5;
        entryRust();
      } else if (treinDetectie == true) {
        exitStoplichtNoordOranje();
        satenumber = 6;
        entryTreinKomtEraanNoord();
      }
      break;

    case 4:
      doStoplichtZuidOranje();
      if (serial_getTimer() >= 2000) {
        exitStoplichtZuidOranje();
        satenumber = 5;
        entryRust();
      } else if (treinDetectie == true) {
        exitStoplichtZuidOranje();
        satenumber = 7;
        entryTreinKomtEraanZuid();
      }
      break;

    case 5:
      doRust();
      if (serial_getTimer() >= 2000) {
        exitRust();
        satenumber = 0;
        entryAllesOpRood();
      }
      break;

    case 6:
      doTreinKomtEraanNoord();
      if (serial_getTimer() >= 2000) {
        exitTreinKomtEraanNoord();
        satenumber = 8;
        entrySlagboomsluiten();
      }

    case 7:
      doTreinKomtEraanZuid();
      if (serial_getTimer() >= 2000) {
        exitTreinKomtEraanZuid();
        satenumber = 8;
        entrySlagboomsluiten();
      }
      break;

    case 8:
      doSlachtboomSluiten();
      if (servoRead() <= 0) {
        exitSlachtboomSluiten();
        satenumber = 9;
        entrySlachtboomDicht();
      }
      break;

    case 9:
      doSlachtboomDicht();
      if (treinVoorbij == true) {
        exitSlachtboomDicht();
        satenumber = 10;
        entrySlachtboomOpenen();
      }
      break;

    case 10:
      doSlachtboomOpenen();
      if (servoRead() >= 90) {
        exitSlachtboomOpenen();
        satenumber = 11;
        entrySlachtboomOpen();
      }
      break;

    case 11:
      doSlachtboomOpen();
      if (serial_getTimer() >= 5000) {
        exitSlachtboomOpen();
        satenumber = 0;
        entryAllesOpRood;
      }
  }
}