Steen[] stenen = new Steen[100];
Vakjes[] vak = new Vakjes[99];

void setup() {
  size(1000, 1000);

  //int damplaats = width /5 /2;

  //for (int i = 0; i < stenen.length; i++) {
  //  stenen[i] = new Steen(40, damplaats, 40, #ff00ff);
  //  damplaats += width / 5;
  //}
  //stenen[1] = new Steen(40, 70, 40, #ff0000);
  //stenen[2] = new Steen(40, 100, 40, #ff0000);
  //stenen[3] = new Steen(40, 10, 40, #ff0000);
  

maakVakjes();

}

void draw(){
plaatsSteenZwart();
plaatsSteenWit();
  
}




//  Product product1 = new Product("pc", 500);
//  Product product2 = new Product("mac", 2000);



//  println(product1.naam + " kost: " + product1.prijs + " euro");
//  println(product2.naam + " kost: " + product2.prijs + " euro");


//  //Steen damsteen = new Steen(100,100,100,#000000);
//  //damsteen.yescircle();

//  //  Steen damsteen2 = new Steen(10,10,10,#ffffff);
//  //    damsteen2.yescircle();
//}


//void draw() {
//  for (int i = 0; i < stenen.length; i++) {
//    fill(stenen[i].kleur);
//    stenen[i].yescircle();
//  }
//}





/// 2.4

//de rede dat karel niet kan is omdat hij geen this. heeft
