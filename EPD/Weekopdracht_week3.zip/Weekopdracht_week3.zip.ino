const int MCP9701PIN = A5;
const int MEASUREMENT_INTERVAL = 5000;  // Meetinterval in milliseconden

unsigned long previousMillis = 0;
const int ldrPin = A3;
void setup() {
  setupMCP9701();
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= MEASUREMENT_INTERVAL) {
    previousMillis = currentMillis;

    float temperatuur = getTemperatuurInGradenCelcius();

    Serial.print("Temperatuur: ");
    Serial.println(temperatuur);
    getLicht();
    potentiometerRead();
  }
}


void setupMCP9701() {
  pinMode(MCP9701PIN, INPUT);
  Serial.begin(9600);
}
