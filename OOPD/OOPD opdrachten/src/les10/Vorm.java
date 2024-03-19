package les10;

import processing.core.PApplet;

public abstract class Vorm {

    protected float x, y, vx, vy, ax, ay;
    protected int kleur;

    protected boolean isZichtbaar = true;



    public Vorm(float x, float y) {
        this.x = x;
        this.y = y;
        kleur = 0xFFFFFFFF;

    }


    public void doeStap() {
        if (!staatStil()) {
            pasVersnellingToe();
            pasSnelheidToe();
        }
    }

    public void setSnelheid(float vx, float vy) {
        this.vx = vx;
        this.vy = vy;
    }

    public void setVersnelling(float ax, float ay) {
        this.ax = ax;
        this.ay = ay;
    }

    public void zetStil() {
        vx = vy = ax = ay = 0;
    }

    public boolean staatStil() {
        return (vx == 0 && vy == 0 && ax == 0 && ay == 0);
    }

    public void setKleur(int kleur) {

        this.kleur = kleur;
    }

    private void pasVersnellingToe() {
        vx += ax;
        vy += ay;
    }

    protected void pasSnelheidToe() {
        x += vx;
        y += vy;
    }

    public void setZichtbaar(boolean zichtbaar) {
        if (zichtbaar) {
            isZichtbaar = true;
            kleur = 0xFFFFFFFF;
        } else {
            isZichtbaar = false;
            kleur = 0x00000000;
        }
        isZichtbaar = zichtbaar;
    }

    public boolean getZichtbaar() {
        return isZichtbaar;
    }

    public abstract void teken(PApplet p);
}

