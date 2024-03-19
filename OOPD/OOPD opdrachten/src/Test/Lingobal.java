package Test;


import java.util.Random;

public class Lingobal {
    private int hoeveelheidBallen;
    private int pogingen;

    public Lingobal(int hoeveelheidBallen, int pogingen) {
        this.hoeveelheidBallen = hoeveelheidBallen;
        this.pogingen = pogingen;
    }

    public String grabbelen() {
        Random random = new Random();

        for (int i = 0; i < pogingen; i++) {
            int r = random.nextInt(hoeveelheidBallen);
            if (r == hoeveelheidBallen /2) {
                return "U heeft de groene bal";

            }
            }
        return "U heeft de rode bal";

    }



    public void setHoeveelheidBallen(int hoeveelheidBallen) {
        this.hoeveelheidBallen = hoeveelheidBallen;
    }

    public int getHoeveelheidBallen() {
        return hoeveelheidBallen;
    }

    public int getPogingen() {
        return pogingen;
    }

    public void setPogingen(int pogingen) {
        this.pogingen = pogingen;
    }
}
