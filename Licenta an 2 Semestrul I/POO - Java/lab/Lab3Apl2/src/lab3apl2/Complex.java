package lab3apl2;

public class Complex {

    private int real, imaginar;

    public Complex(int real, int imaginar) {
        this.real = real;
        this.imaginar = imaginar;
    }

    public Complex() {
        this(0, 0);
    }

    public Complex(Complex c) {
        this.real = c.real;
        this.imaginar = c.imaginar;
    }

    public int getRreal() {
        return real;
    }

    public int getImaginar() {
        return imaginar;
    }

    public void setReal(int real) {
        this.real = real;
    }

    public void setImaginar(int imaginar) {
        this.imaginar = imaginar;
    }

    public void addWithComplex(Complex c) {
        this.real += c.getRreal();
        this.imaginar += c.getImaginar();
    }

    public void showNumber() {
        if (imaginar == 0) {
            System.out.println(real);
        } else if (imaginar > 0) {
            System.out.println(real + "+i" + imaginar);
        } else {
            System.out.println(real + "-i" + -1*imaginar);
        }
    }
}
