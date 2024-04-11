package seminar5;

public class Seminar5 {

    public static void main(String[] args) {
        System.out.println("Static id: " + StaticKeyword.static_id);
        System.out.println("Static nume: " + StaticKeyword.static_nume);
        //se afiseaza ca in blocul static
        //modalitatea de accesare a campurilor/metodelor statice
        //punctate la numele clasei
        System.out.println(StaticKeyword.staticMethod());

        StaticKeyword sk = new StaticKeyword(); //obiect

        System.out.println("Static id sk: " + StaticKeyword.static_id);
        System.out.println("Static nume sk: " + StaticKeyword.static_nume);
        //se afiseaza cum au fost initializate in constructor
        //modalitate de accesare tot punctat la numele clasei
        System.out.println("Non-static id sk: " + sk.id);
        System.out.println("Non-static nume sk: " + sk.nume);
        //modalitate de accesare variabile instanta: punctat la numele obiectului
    }
}
