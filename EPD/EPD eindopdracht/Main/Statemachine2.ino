byte satenumber = 0;
bool treinVoorbij = false;
bool treinDetectie = false;
bool autodetectieNoord = false;
bool autodetectieZuid = false;

int kortePauze = 2000;
int langePauze = 5000;

void Stateloop() {
  Serial.println(satenumber);
  switch (satenumber) {

    case 0:
      entryAllesOpRood();
      if (autodetectieNoord == true) {
        exitAllesOpRood();
        entryStoplichtNoordGroen();
        satenumber = 1;
        buzzStop();
      }

      else if (autodetectieZuid == true) {
        exitAllesOpRood();
        satenumber = 2;
        entryStoplichtZuidGroen();

      }

      else if (treinDetectie == true) {
        exitAllesOpRood();
        satenumber = 7;
        entrySlagboomsluiten();
      }
      break;

    case 1:

      doStoplichtNoordGroen();
      if (serial_getTimer() >= langePauze) {
        exitStoplichtNoordGroen();
        satenumber = 3;
        entryStoplichtNoordOranje();

      } else if (treinDetectie == true) {
        exitStoplichtNoordGroen();
        satenumber = 6;
        entryTreinKomtEraanNoord();
      } 
      break;

 case 2:
      doStoplichtZuidGroen();
      if (serial_getTimer() >= langePauze) {
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
      if (serial_getTimer() >= kortePauze) {
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
      if (serial_getTimer() >= kortePauze) {
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
      if (serial_getTimer() >= kortePauze) {
        exitRust();
        satenumber = 0;
        entryAllesOpRood();
      }
      break;

    case 6:
      doTreinKomtEraanNoord();
      if (serial_getTimer() >= kortePauze) {
        exitTreinKomtEraanNoord();
        satenumber = 8;
        entrySlagboomsluiten();
      }

    case 7:
      doTreinKomtEraanZuid();
      if (serial_getTimer() >= kortePauze) {
        exitTreinKomtEraanZuid();
        satenumber = 8;
        entrySlagboomsluiten();
      }
      break;

    case 8:
      doSlachtboomSluiten();
      if (servoClosed() == true) {
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
      if (servoOpened()) {
        exitSlachtboomOpenen();
        satenumber = 11;
        entrySlachtboomOpen();
      }
      break;

    case 11:
      doSlachtboomOpen();
      if (serial_getTimer() >= langePauze) {
        exitSlachtboomOpen();
        satenumber = 0;
      }
  }
}

