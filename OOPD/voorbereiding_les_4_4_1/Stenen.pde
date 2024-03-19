class Steen {
  int size;
  int x;
  int y;
  int kleur;



  Steen(int size, int x, int y, int kleur) {
    this.size = size;
    this.x = x;
    this.y = y;
    this.kleur = kleur;
  }

  void yescircle() {
    fill(kleur);
    if (this.muisklik() == true) {
      stroke(0, 0, 255);
      strokeWeight(2);
    } else {
      noStroke();
    }
    circle(x, y, size);
    println("ey test");
  }

  boolean muisklik() {
    if (mouseX < this.x +size && mouseX > this.x  && mouseY >= this.y -size) {
      return true;
    } else
      return false;
  }
}



void plaatsSteenZwart() {
  int j = 0;
  int Rows = 0 ;
  boolean isStone = true;
  for (int hoogteSteen = 0; Rows <=3; hoogteSteen += height /10) {
    isStone = !isStone;

    for (int breeteSteen = 0; breeteSteen < width; breeteSteen += width/10) {

      if (isStone) {
        stenen[j] = new Steen(50, breeteSteen + width/20, hoogteSteen + height/20, #111111);
        stenen[j].yescircle();
      }

      j++;
      isStone = !isStone;
    }
    Rows++;
  }
}


void plaatsSteenWit() {
  int j = 0;
  int Rows = 0 ;
  boolean isStone = true;
  for (int hoogteSteen = height; Rows <=3; hoogteSteen -= height /10) {
    isStone = !isStone;

    for (int breeteSteen = 0; breeteSteen < width; breeteSteen += width/10) {

      if (isStone) {
        stenen[j] = new Steen(50, breeteSteen + width/20, hoogteSteen + width/20, #cccccc);
        stenen[j].yescircle();
      }

      j++;
      isStone = !isStone;
    }
    Rows++;
  }
}




//int j = 0;
//for (int hoogte = 0; hoogte < height; hoogte += height /10) {
//  kleurvak = !kleurvak;
//  for (int breete = 0; breete < width; breete += width/10) {
//    if (kleurvak == true) {
//      vak[j] = new Vakjes(100, breete, hoogte, #000000);
//      vak[j].vierkant();
//    } else {
//      vak[j] = new Vakjes(100, breete, hoogte, #ffffff);
//      vak[j].vierkant();
//    }

//    kleurvak = !kleurvak;
//    j++;
//  }
