class Vakjes {
  int size;
  int x;
  int y;
  int kleur;

  Vakjes (int size, int x, int y, int kleur) {
    this.size = size;
    this.x = x;
    this.y = y;
    this.kleur = kleur;
  }
  void vierkant() {
    fill(kleur);
    square(x, y, size);
  }
}

void maakVakjes() {
  boolean kleurvak = true;
ellipseMode(CENTER);
  int j = 0;
  for (int hoogte = 0; hoogte < height; hoogte += height /10) {
    kleurvak = !kleurvak;
    for (int breete = 0; breete < width; breete += width/10) {
      if (kleurvak == true) {
        vak[j] = new Vakjes(100, breete, hoogte, #ffffff);
        vak[j].vierkant();
      }

      kleurvak = !kleurvak;
      j++;
    }
  }
}
