const int LEEG_DISPLAY = 0;
const int ROLLEN = 1;
const int TOON_WAARDE = 2;
int huidigeToestand = LEEG_DISPLAY;
 
const int FONTLENGTE = 16;
byte font[] {
B11111100, // 0
B01100000, // 1
B11011010, // 2
B11110010, // 3
B01100110, // 4
B10110110, // 5
B10111110, // 6
B11100000, // 7
B11111110, // 8
B11110110, // 9
B11101110, // A
B00111110, // b
B10011100, // C
B01111010, // d
B10011110, // E
B10001110, // F
};
 
void setup() {
  setupShiftRegister();
  Serial.begin(9600);
  AllOnShiftRegister();
}
 
 
void loop() {
  
//   for (int i = 0; i < FONTLENGTE; i++) {
//     setShiftRegister(font[i]);
//     delay(200);
//     Serial.println(font[i]);

    
// }

     // setShiftRegister(font[9]);

 
  switch (huidigeToestand) {
    case LEEG_DISPLAY:
      // Schrijf hier de code die moet worden uitgevoerd
      // in toestand LEEG_DISPLAY
 
      break;
    case ROLLEN:
      // Schrijf hier de code die moet worden uitgevoerd
      // in toestand ROLLEN
      break;
      break;
    case TOON_WAARDE:
      // Schrijf hier de code die moet worden uitgevoerd
      // in toestand TOON_WAARDE
      // Hint: waarschijnlijk hoef je hier niets met het display te doen
      // en blijft gewoon de laatste waarde van ROLLEN staan.
      break;
  }
}
 














// const int PIN = A3;
// const int MEASUREMENT_INTERVAL = 5000; 

// unsigned long previousMillis = 0;

// void setup() {

//   setupMCP9701();
// }

// void loop() {
//   unsigned long currentMillis = millis();

//   if (currentMillis - previousMillis >= MEASUREMENT_INTERVAL) {
//     previousMillis = currentMillis;

//     float temperatuur = getTemperatuurInGradenCelcius();

//     Serial.print("Temperatuur: ");
//     Serial.println(temperatuur);

//   }

// }

// void setupMCP9701() {
//   pinMode(PIN, INPUT);
//   Serial.begin(9600);
// }

// float getTemperatuurInGradenCelcius() {
//   const float vout0 = 400;  
//   const float tc = 19.53;   
//   float vout_avg = 0;
//   const int AANTAL_METINGEN = 1000;

//   for (int i = 0; i < AANTAL_METINGEN; i++) {
//     float vout = analogRead(PIN) * (4976.30 / 1023);
//     vout_avg += vout;
//   }

//   float vout = vout_avg / AANTAL_METINGEN;
//   return (vout - vout0) / tc;
// }
