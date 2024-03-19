class Dambord {
  
    int[][] damstat = { {200, 100, 30}, {30, 30, 50}, {100, 340, 100}};
 



  void tekenDamsteen() {
    Damsteen Damdam = new Damsteen(damstat[0][0], damstat[0][1], damstat[0][2]);
    Damsteen Damdam1 = new Damsteen(damstat[1][0], damstat[1][1], damstat[1][2]);
    Damsteen Damdam2 = new Damsteen(damstat [2][0], damstat[2][1], damstat[2][2]);


    Damdam.createCircle();
    Damdam1.createCircle();
    Damdam1 = Damdam2;
    Damdam2.createCircle();
  }
}
