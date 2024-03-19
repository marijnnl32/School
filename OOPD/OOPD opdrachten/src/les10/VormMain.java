package les10;
import processing.core.PApplet;


public class VormMain extends PApplet {
    Vorm c1 = new tekenCirkel(100, 100, 50);
    Vorm r1 = new tekenRechthoek(300, 300 , 50, 50);

    public static void main(String[] args) {
        PApplet.main(new String[]{"les10.VormMain"});
    }


    public void settings() {
        size(500, 500);
    }

    public void setup() {
        background(0x00000000);

        c1.teken(this);
        r1.teken(this);
        c1.setSnelheid(5,0);
    }

    public void draw() {

        c1.pasSnelheidToe();
//        System.out.println(millis());

        background(0x00000000);

        c1.teken(this);
        r1.teken(this);
        System.out.println(c1.x);
        if(c1.x > 500) {
            c1.setSnelheid(-5,0);
        }

    }
}


