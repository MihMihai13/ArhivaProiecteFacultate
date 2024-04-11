package lab4apl1;

public class Lab4Apl1 {

    public static void main(String[] args) {
        
//        Lindt l1 = new Lindt((float)5,(float)1,(float)2, "milk", "Romania");
//        Lindt l2 = new Lindt((float)3,(float)10,(float)4, "sugar-free", "Romania");
//        System.out.println(l1.equals(l2));
//        l1.printLindtDim();

        CandyBag b = new CandyBag();
        Area a = new Area(b, 13, "Splaiul Independenti", "mesaj");
        a.getBirthdayCardv2();
    }

}
