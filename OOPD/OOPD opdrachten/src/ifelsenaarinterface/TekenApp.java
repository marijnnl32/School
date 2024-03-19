package ifelsenaarinterface;

import java.util.ArrayList;

import processing.core.PApplet;

@SuppressWarnings("serial")
public class TekenApp extends PApplet {

    public static void main(String[] args) {
        PApplet.main("ifelsenaarinterface.TekenApp");
    }

    protected ArrayList<Figuur> figurenLijst = new ArrayList<>();
    private IGereedschap huidigGereedschap = new SelecteerGereedschap();

    public void settings() {
        size(400, 400);
    }

    public void draw() {
        background(0);
        for (Figuur figuur : figurenLijst) {
            figuur.teken(this);
        }
    }

    public void mousePressed() {
        huidigGereedschap.pasGereedschaptoe(this);
    }

    public void keyReleased() {
        switch (key) {
            case 's':
                huidigGereedschap = new SelecteerGereedschap();
                break;
            case 'r':
                huidigGereedschap = new RechthoekGereedschap();
                break;

            case 'c':
                huidigGereedschap = new CirkelGereedschap();
                break;
            case 'g':
                huidigGereedschap = new GumGereedschap();
                break;
        }
    }


    public ArrayList<Figuur> getFigurenLijst() {
        return figurenLijst;
    }
}
