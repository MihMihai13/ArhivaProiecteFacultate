/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package apl3;

import apl3.Car.CarType;
import java.util.Random;

/**
 *
 * @author mihai
 */
public class Dealership {

    private class BrandOffer implements Offer {

        @Override
        public int getDiscount(Car car) {
            if (car.type == CarType.MERCEDES) {
                return (int) (car.price * 0.05);
            }
            if (car.type == CarType.FIAT) {
                return (int) (car.price * 0.10);
            }
            if (car.type == CarType.SKODA) {
                return (int) (car.price * 0.15);
            }
            return 0;
        }
    }

    private class DealerOffer implements Offer {

        @Override
        public int getDiscount(Car car) {
            if (car.type == CarType.MERCEDES) {
                return 300 * (2022 - car.year);
            }
            if (car.type == CarType.FIAT) {
                return 100 * (2022 - car.year);
            }
            if (car.type == CarType.SKODA) {
                return 150 * (2022 - car.year);
            }
            return 0;
        }
    }

    private class SpecialOffer implements Offer {

        int offer;

        public SpecialOffer() {
            Random rand = new Random(20);
            offer = rand.nextInt(1000);
        }

        @Override
        public int getDiscount(Car car) {
            Random rand = new Random(20);
            return offer;
        }
    }

    public int getFinalPrice(Car car) {
        int finalPrice = car.price;
        BrandOffer bf = new BrandOffer();
        DealerOffer df = new DealerOffer();
        SpecialOffer sf = new SpecialOffer();
        System.out.println("Applying Brand discount: " + bf.getDiscount(car));
        finalPrice = finalPrice - bf.getDiscount(car);
        System.out.println("Applying Dealer discount: " + df.getDiscount(car));
        finalPrice = finalPrice - df.getDiscount(car);
        System.out.println("Applying Special discount: " + sf.getDiscount(car));
        finalPrice = finalPrice - sf.getDiscount(car);
        return finalPrice;
    }

    public void negotiate(Car car, Offer offer) {
        offer.getDiscount(car);
        System.out.println(offer.getDiscount(car));
    }
}
