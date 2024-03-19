package Dieren;

public class Asiel {
    public static void main(String[] args) {
        Dier dier1 = new Dier("Canine");
//        Dier dier2 = new Zoogdier("Canine", 2);
        Dier dier3 = new Hond("Canine", 2, "Fiffie");

        Zoogdier zoogdier2 = new Zoogdier("Canine", 3);
        Zoogdier zoogdier3 = (Hond) new Hond("Canine", 3, "Brutus");

        Hond hond3 = new Hond("Canine", 4, "Pluto");

        //casts:
        ((Hond)dier3).blaf();
        ((Hond)zoogdier3).blaf();
//        ((Hond)dier1).blaf();
        hond3.blaf();

    }
}

