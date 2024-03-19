package Personenlijst;
import java.util.ArrayList;

public class PersonenLijst {
    private ArrayList<Persoon> lijst;

    public PersonenLijst() {
        lijst = new ArrayList<>();
    }

    public ArrayList<Student> getSLBStudenten(Docent SLBer) {
        ArrayList<Student> studenten = new ArrayList<>();

        for(Persoon p : lijst){
        if (p.getSLBer() == SLBer){
            studenten.add((Student) p);
        }
            }
        return studenten;
        }


    public static void main(String[] args) {
        PersonenLijst p = new PersonenLijst();

        Docent piet=new Docent("Piet", "Jansen", "jnsnp");

        Student marie=new Student("Marie", "Pieters", 31415, piet);

        Student sjaak=new Student("sjaak", "sjaak", 46248, piet);


        Student jan=new Student("Jan", "de Vries", 92653, null); // nog geen SLB'er

        p.lijst.add(piet);

        p.lijst.add(marie);

        p.lijst.add(jan);
        p.lijst.add(sjaak);

        // voeg zelf nog enkele docenten en studenten toe

        ArrayList<Student> studentenVanPiet=p.getSLBStudenten(piet);

        System.out.println(studentenVanPiet);
    }
}
