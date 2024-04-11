
import apl1.Operation;
import apl2.Song;
import apl2.DangerousAlbum;
import apl2.ThrillerAlbum;
import apl2.BadAlbum;
import apl3.Car;
import apl3.Car.CarType;
import apl3.Dealership;
import apl3.Offer;
import java.util.ArrayList;
import java.util.function.Predicate;

public class Main {

    public static void main(String[] args) {
//        Operation o = new Operation(5);
//        o.plus(5);
//        System.out.println(o.getNumber());
//        o.div(0);
//        o.div(2);
//        System.out.println(o.getNumber());

//        Song s = new Song("Num", 151, "Michael Jackson");
//        System.out.println(s);
//        BadAlbum ba = new BadAlbum();
//        ba.addSong(s);
//        System.out.println(ba.toString());
        Car c1 = new Car(20000, CarType.MERCEDES, 2010);
        Car c2 = new Car(35000, CarType.MERCEDES, 2015);
        Car c3 = new Car(3500, CarType.FIAT, 2008);
        Car c4 = new Car(7000, CarType.FIAT, 2010);
        Car c5 = new Car(12000, CarType.SKODA, 2015);
        Car c6 = new Car(25000, CarType.SKODA, 2021);

        Dealership d = new Dealership();
        System.out.println("Final price = " + d.getFinalPrice(c1) + "\n");
        System.out.println("Final price = " + d.getFinalPrice(c2) + "\n");
        System.out.println("Final price = " + d.getFinalPrice(c3) + "\n");
        System.out.println("Final price = " + d.getFinalPrice(c4) + "\n");
        System.out.println("Final price = " + d.getFinalPrice(c5) + "\n");
        System.out.println("Final price = " + d.getFinalPrice(c6) + "\n");

        Offer o = new Offer() {
            @Override
            public int getDiscount(Car car) {
                return (int) (car.getPrice()*0.05);
            }

        };
        
        Car c7 = new Car(20000, CarType.MERCEDES, 2019);
        d.negotiate(c7, o);
        
        ArrayList cars = new ArrayList<Car>();
        Car car = new Car(30000, CarType.MERCEDES, 2019);
        cars.add(car);
        car = new Car(50000, CarType.MERCEDES, 2021);
        cars.add(car);
        car = new Car(10000, CarType.FIAT, 2018);
        cars.add(car);
        car = new Car(20000, CarType.SKODA, 2019);
        cars.add(car);
        
        cars.removeIf((x) -> {
            Car c = (Car) x;
            return c.getPrice() > 25000;
        });           
        cars.forEach((x) -> System.out.println(x));
    }
}
