package lab4apl1;

import java.util.ArrayList;
import java.util.Objects;

public class CandyBox {

    private String flavor, origin;

    public CandyBox() {
        flavor = "sugar-free";
        origin = "Switzerland";
    }

    public CandyBox(String flavor, String origin) {
        this.flavor = flavor;
        this.origin = origin;
    }

    public float getVolume() {
        return 0;
    }

    public String toString() {
        return origin + " " + flavor + " chocolate";
    }

    public boolean equals(CandyBox c) {
        return true;
    }

    @Override
    public boolean equals(Object o) {
        if (o == this) {
            return true;
        }
        if (!(o instanceof CandyBox)) {
            return false;
        }
        return equals((CandyBox) o);
    }
}

class Lindt extends CandyBox {

    float lenght, width, hight;

    public Lindt() {
        lenght = 0;
        width = 0;
        hight = 0;
    }

    public Lindt(float lenght, float width, float hight, String flavor, String origin) {
        super(flavor, origin);
        this.lenght = lenght;
        this.width = width;
        this.hight = hight;
    }

    @Override
    public float getVolume() {
        return lenght * width * hight;
    }

    @Override
    public String toString() {
        return "Lindt " + super.toString() + " has volume " + getVolume();
    }

    public void printLindtDim() {
        System.out.println("lenght: " + lenght + " width: " + width + " hight: " + hight);
    }

}

class Baravelli extends CandyBox {

    float radius, hight;

    public Baravelli() {
        radius = 0;
        hight = 0;
    }

    public Baravelli(float radius, float hight, String flavor, String origin) {
        super(flavor, origin);
        this.radius = radius;
        this.hight = hight;
    }

    public float getVolume() {
        return (float) (Math.PI * Math.pow(radius, 2) * hight);
    }

    @Override
    public String toString() {
        return "Baravelli " + super.toString() + " has volume " + getVolume();
    }

    public void printBaravelliDim() {
        System.out.println("radius: " + radius + " hight: " + hight);
    }

}

class ChocAmor extends CandyBox {

    float lenght;

    public ChocAmor() {
        lenght = 0;
    }

    public ChocAmor(float lenght, String flavor, String origin) {
        super(flavor, origin);
        this.lenght = lenght;
    }

    @Override
    public float getVolume() {
        return (float) Math.pow(lenght, 3);
    }

    @Override
    public String toString() {
        return "ChocAmor " + super.toString() + " has volume " + getVolume();
    }

    public void printChocAmorDim() {
        System.out.println("lenght: " + lenght);
    }

}

class CandyBag {

    ArrayList<CandyBox> candys;

    public CandyBag() {
        candys = new ArrayList<>();
        Lindt l = new Lindt((float) 20, (float) 5.4, (float) 19.2, "cherry", "Austria");
        candys.add(l);
        l = new Lindt((float) 20, (float) 5.4, (float) 19.2, "apricot", "Austria");
        candys.add(l);
        l = new Lindt((float) 20, (float) 5.4, (float) 19.2, "strawberry", "Austria");
        candys.add(l);
        Baravelli b = new Baravelli((float) 6.7, (float) 8.7, "grape", "Itally");
        candys.add(b);
        ChocAmor c = new ChocAmor((float) 5.5, "cafee", "France");
        candys.add(c);
        c = new ChocAmor((float) 5.5, "vanilla", "France");
        candys.add(c);
    }
}

class Area {
    CandyBag cb;
    int number;
    String street, message;

    public Area() {
        number = 0;
        street = "nowhere";
        message = "empty";
    }

    public Area(CandyBag cb, int number, String street, String message) {
        this.cb = cb;
        this.number = number;
        this.street = street;
        this.message = message;
    }
    
    
    public void getBirthdayCardv2() {
        System.out.println(street + " " + number + " La multi ani!");
        for(int i = 0; i < cb.candys.size(); i++){
            System.out.println(cb.candys.get(i));
        }
    }
    
}
