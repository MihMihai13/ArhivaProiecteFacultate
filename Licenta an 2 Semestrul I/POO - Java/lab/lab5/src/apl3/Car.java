/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package apl3;

/**
 *
 * @author mihai
 */
public class Car {

    int price;
    CarType type;
    int year;

    public enum CarType {
        MERCEDES,
        FIAT,
        SKODA;
    }

    public Car(int price, CarType type, int year) {
        this.price = price;
        this.type = type;
        this.year = year;
    }

    public Car(Car car) {
        this.price = car.price;
        this.type = car.type;
        this.year = car.year;
    }

    @Override
    public String toString() {
        return "Car{" + "price=" + price + ", carType=" + type + ", year=" + year + '}';
    }

    public int getPrice() {
        return price;
    }

    public CarType getType() {
        return type;
    }

    public int getYear() {
        return year;
    }

}
