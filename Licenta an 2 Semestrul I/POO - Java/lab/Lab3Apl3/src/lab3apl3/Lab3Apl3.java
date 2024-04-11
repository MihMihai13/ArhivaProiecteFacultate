package lab3apl3;

public class Lab3Apl3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Point p = new Point(5, 2);
//        System.out.println(p);
        
        float[] x = {1,2,3,4,5,6,7,8,9,10};
        Polygon polygon = new Polygon(x);
        System.out.println(polygon);
    }
    
}
