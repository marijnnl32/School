public class Studieadviseur {

    public static boolean krijgtPositiefStudieadvies(Student s) {
        int voldoendes = 0;
        for (int i = 0; i <cijferlijst().length; i++) {
            if (s.getCijfers()[i] >= 6) {
                voldoendes++;
            }
        }
        if (voldoendes >= 4) {
            return true;
        }
        else {
            return false;
        }
    }

       int[] cijferlijst(){
        Student student = new Student("Piet");
        student.setCijfer(0, 7);
        student.setCijfer(1, 8);
        student.setCijfer(2, 6);
        student.setCijfer(3, 5);
        student.setCijfer(4, 7);
        student.setCijfer(5, 8);
        student.setCijfer(6, 6);
        student.setCijfer(7, 5);
        int [] cijfers = new int[7];
        for (int i = 0; i < cijfers.length;  i++) {
            cijfers = student.getCijfers();
        }
        return cijfers;
        }
        //Implementatie moet je zelf maken, zie opgave


}
