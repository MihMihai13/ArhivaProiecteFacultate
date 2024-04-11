package lab3apl3;

public class Polygon {

    int n;
    Point points[];

    public Polygon(int n) {
        this.n = n;
        points = new Point[n];
        for (int i = 0; i < n; i++) {
            points[i] = new Point();
        }
    }

    public Polygon(float v[]) {
        this(v.length / 2);
//        this.points[0].changeCoords((float)1, (float)2);
        for (int i = 0; i < v.length / 2; i++) {
            this.points[i].changeCoords(v[i * 2], v[i * 2] + 1);
        }
    }

    public String toString() {
        String poly = points[0].toString();
        for (int i = 1; i < n; i++) {
            poly += " " + points[i];
        }
        return poly;
    }
}
