unsigned long previousMillis = 0;
int satenumber = 0;

  void setup() {
  ledsSetup();
  servosetup();
  Buzzersetup();
  setupShiftRegister();
}

void loop() {

  // switch (entryAllesOpRood()) {

  //   case 0:
  //     entryAllesOpRood();
  //     if (autodetectie == "Noord") {
  //       exitAllesOpRood();
  //       entryStoplichtNoordGroen();
  //       satenumber = 1;
  //     }

  //     else if (autodetectie == "Zuid") {
  //       exitAllesOpRood();
  //       satenumber = 2;
  //       entryStoplichtZuiddGroen();

  //     }

  //     else if (treinDetectie == true) {
  //       exitAllesOpRood();
  //       statenumber = 8 entrySlachtboomSluiten()
  //     }
  //     break;

  //   case 1:
  //     doStoplichtNoordGroen();
  //     if (setTimer == True) {
  //       exitStoplichtNoordGroen();
  //       statenumber = 3;
  //       entryStoplichtNoordOranje()
  //     } else if (treinDetectie == true) {
  //       exitStoplichtNoordGroen();
  //       statenumber = 6;
  //       entryTreinKomtEraanNoord();
  //     }

  //   case 2:
  //     doStoplichtZuidGroen();
  //     if (setTimer == True) {
  //       exitStoplichtZuifGroen();
  //       statenumber = 4 entryStoplichtZuidOranje()
  //     } else if (treinDetectie == true) {
  //       exitStoplichtZuidGroen();
  //       statenumber = 7;
  //       entryTreinKomtEraanZuid();
  //     }
  //     break;

  //   case 3:
  //     doStoplichtNoordOranje();
  //     if (setTimer == True) {
  //       exitStoplichtNoordOranje();
  //       statenumber = 5;
  //       entryRust()
  //     } else if (treinDetectie == true) {
  //         exitStoplichtNoordOranje());
  //         statenumber = 6;
  //         entryTreinKomtEraanNoord();
  //     }
  //     break;

  //   case 4:
  //     doStoplichtZuidOranje();
  //     if (setTimer == True) {
  //       exitStoplichtZuidOranje();
  //       statenumber = 5;
  //       entryRust();
  //     } else if (treinDetectie == true) {
  //       exitStoplichtNoordZuid());
  //       statenumber = 7;
  //       entryTreinKomtEraanZuid();
  //     }
  //     break;

  //   case 5:
  //     dorust();
  //     if (setTimer == True) {
  //       exitrust();
  //       statenumber = 0;
  //       entryAllesOpRood();
  //     }
  //     break;

  //   case 6:
  //     doTreinKomtEraanNoord();
  //     if (setTimer == True) {
  //       exitTreinKomtEraanNoord();
  //       statenumber = 8;
  //       entryslachtboomSluiten();
  //     }

  //   case 7:
  // }
// }
// ledsOranjeKlipper();
// ledsOranjeKlipper();
// ledsStoplichtNoord("ROOD");
// ledsStoplichtZuid("ROOD");
// ledsStoplichtNoord("GROEN");
// ledsStoplichtZuid("GROEN");
// aftellen();
// buzz();
// buzzTrein();
// button_Loop();
// servoDicht();


// for (int i = 0; i < FONTLENGTE; i++) {
//   setShiftRegister(font[i]);
//   delay(200);
}
// }
