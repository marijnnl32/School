package les10;

import processing.core.PApplet;

public class tekenRechthoek extends Vorm {

    private float breedte, hoogte;

    public tekenRechthoek(int x, int y, int breedte, int hoogte) {
        super(x, y);
        this.breedte = breedte;
        this.hoogte = hoogte;
        zetStil();
    }

    @Override
    public void teken(PApplet p) {
        p.noStroke();
        p.fill(kleur);
        p.rect(x, y, breedte, hoogte);
    }
}





