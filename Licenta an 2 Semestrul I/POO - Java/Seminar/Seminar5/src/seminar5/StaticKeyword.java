package seminar5;

public class StaticKeyword {
    //variabile statice

    public static int static_id;
    public static String static_nume;

    //variabile non-statice 
    public int id;
    public String nume;

    static {
        static_id = 10;
        static_nume = "Alex";
        /*id=9;//eroare de compilare: non-static variable id 
        //cannot be referenced from a static context
        nume="Alin"; //similar */
        System.out.println("Mesaj din blocul static");
        //va fi primul afisat deoarece blocurile statice 
        //sunt incarcate odata cu clasa in memorie
    }

    public StaticKeyword() {//constructor
        id = 9;
        nume = "Alin";
        static_id = 7;
        static_nume = "Vlad";
        System.out.println(staticMethod() + " din constructor");
    }

    //metoda statica
    public static String staticMethod() {
        return "Sunt liber!!!";
    }
}
