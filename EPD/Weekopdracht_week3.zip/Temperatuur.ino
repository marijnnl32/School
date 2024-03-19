const float vout0 = 400;
const float tc = 19.53;
float vout_avg = 0;
const int AANTAL_METINGEN = 1000;


float getTemperatuurInGradenCelcius() {
  const float vout0 = 400;
  const float tc = 19.53;
  float vout_avg = 0;
  const int AANTAL_METINGEN = 1000;

  for (int i = 0; i < AANTAL_METINGEN; i++) {
    float vout = analogRead(MCP9701PIN) * (4976.30 / 1023);
    vout_avg += vout;
  }

  float vout = vout_avg / AANTAL_METINGEN;
  return (vout - vout0) / tc;
}
