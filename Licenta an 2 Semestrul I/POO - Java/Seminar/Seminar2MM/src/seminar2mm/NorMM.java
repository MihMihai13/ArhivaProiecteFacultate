package seminar2mm;

import java.awt.*;
import java.awt.geom.*;
//constructor fara parametri

public class NorMM {

    private double x, y; //stochează poziția norului;
    private double size;//dimensiunea norului
    private Color color;//culoarea norului

    public NorMM(double x, double y, double size, Color color) {
        this.x = x;
        this.y = y;
        this.size = size;
        this.color = color;
    }

    ;
public void desenareNorMM(Graphics2D g2D) {
        Ellipse2D.Double e1 = new Ellipse2D.Double(x, y, size, size);
        Ellipse2D.Double e2 = new Ellipse2D.Double(x + size * 0.35, y - size * 0.2, size * 1.75, size * 1.4);
        Ellipse2D.Double e3 = new Ellipse2D.Double(x + size * 1.5, y + size * 0.15, size * 0.9, size * 0.9);
        Ellipse2D.Double e4 = new Ellipse2D.Double(x + size * 1.8, y + size * 0.05, size * 0.3, size * 0.3);
        g2D.setColor(color);
        g2D.fill(e1);
        g2D.fill(e2);
        g2D.fill(e3);
        g2D.fill(e4);
    }
}
