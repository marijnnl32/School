package Dieren;

public class Dier {
    protected String soort;
    protected String engelseVertaling = "Animal";

    public Dier(String soort) {
        this.soort = soort;
    }

    public void adem() {
        System.out.println("adem in/adem uit");
    }

    public String toString() {
        return "Dier";
    }
}

