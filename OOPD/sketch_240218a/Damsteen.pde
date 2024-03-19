class Damsteen{
int x ;
int y;
int size;
int kleur = #000000;

Damsteen(int x,int y,int size){
  this.x = x;
  this.y = y;
  this.size = size;
}

void createCircle(){
  fill(kleur);
  circle(x,y,size);
  
}

}
