package lab3apl2;


public class Lab3Apl2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Complex c1 = new Complex(5, 2);
        Complex c2 = new Complex(1, 1);
        Complex c3 = new Complex(2, 0);
        Complex c4 = new Complex(4, -5);
        
        c1.addWithComplex(c2);
        c1.showNumber();
        c3.showNumber();
        c4.showNumber();
    }
    
}
