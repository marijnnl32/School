package Dieren;

public class Zoogdier extends Dier {
    protected int draagTijd;
    protected String engelseVertaling = "Mammal";

    public Zoogdier(String soort, int draagTijd) {
        super(soort);
        this.draagTijd = draagTijd;
    }

    public void zoog() {
        System.out.println("zoog");
    }

    @Override
    public String toString() {
        return "Zoogdier";
    }
}

