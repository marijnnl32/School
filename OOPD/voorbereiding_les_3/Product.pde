class Product {
  String naam;
  int prijs;


  Product(String naam, int prijs) {
    this.naam = naam;
    this.prijs = prijs;
  }
}




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
    stroke(0, 0, 255);
    if (muisklik == true) {
      strokeWeight(2);
    }
    circle(x, y, size);
  }

  boolean muisklik() {
    if (mouseX >= this.x *size/2) {
      return true;
    } else
      return false;
  }
}
