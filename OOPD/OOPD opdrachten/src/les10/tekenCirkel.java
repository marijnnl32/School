package les10;

import processing.core.PApplet;

public class tekenCirkel extends Vorm {

    private float diameter;

    public tekenCirkel(float x, float y, float diameter) {
        super(x, y);
        this.diameter = diameter;
        zetStil();
    }



    @Override
    public void teken(PApplet p) {
            p.noStroke();
            p.fill(kleur);
            p.ellipse(x, y, diameter, diameter);
        }
    }



