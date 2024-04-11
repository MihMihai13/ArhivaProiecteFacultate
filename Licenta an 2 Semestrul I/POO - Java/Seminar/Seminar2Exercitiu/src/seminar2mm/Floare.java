/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package seminar2mm;

import java.awt.*;
import java.awt.geom.*;

/**
 *
 * @author mihai
 */
public class Floare {

    private double x, y;
    private double size;
    private Color color;

    public Floare(double x, double y, double size, Color color) {
        this.x = x;
        this.y = y;
        this.size = size;
        this.color = color;
    }

    public void desenareFloare(Graphics2D g2D) {
        Ellipse2D.Double frunza = new Ellipse2D.Double(x, y, size * 4, size);
        g2D.setColor(Color.green);
        g2D.rotate(Math.toRadians(45), x + size * 0.5, y + size * 0.5);
        g2D.fill(frunza);
        g2D.rotate(Math.toRadians(-45), x + size * 0.5, y + size * 0.5);

        g2D.setColor(color);
        g2D.setStroke(new BasicStroke(1));

        Ellipse2D.Double petala1 = new Ellipse2D.Double(x, y + size * 0.5, size, size * 2);
        g2D.fill(petala1);
        g2D.setColor(Color.black);
        g2D.draw(petala1);

        g2D.setColor(color);
        Ellipse2D.Double petala2 = new Ellipse2D.Double(x, y + size * 0.5, size, size * 2);
        g2D.rotate(Math.toRadians(60), x + size * 0.5, y + size * 0.5);
        g2D.fill(petala2);
        g2D.setColor(Color.black);
        g2D.draw(petala2);

        g2D.setColor(color);
        Ellipse2D.Double petala3 = new Ellipse2D.Double(x, y + size * 0.5, size, size * 2);
        g2D.rotate(Math.toRadians(60), x + size * 0.5, y + size * 0.5);
        g2D.fill(petala3);
        g2D.setColor(Color.black);
        g2D.draw(petala3);

        g2D.setColor(color);
        Ellipse2D.Double petala4 = new Ellipse2D.Double(x, y + size * 0.5, size, size * 2);
        g2D.rotate(Math.toRadians(60), x + size * 0.5, y + size * 0.5);
        g2D.fill(petala4);
        g2D.setColor(Color.black);
        g2D.draw(petala4);

        g2D.setColor(color);
        Ellipse2D.Double petala5 = new Ellipse2D.Double(x, y + size * 0.5, size, size * 2);
        g2D.rotate(Math.toRadians(60), x + size * 0.5, y + size * 0.5);
        g2D.fill(petala5);
        g2D.setColor(Color.black);
        g2D.draw(petala5);

        g2D.setColor(color);
        Ellipse2D.Double petala6 = new Ellipse2D.Double(x, y + size * 0.5, size, size * 2);
        g2D.rotate(Math.toRadians(60), x + size * 0.5, y + size * 0.5);
        g2D.fill(petala6);
        g2D.setColor(Color.black);
        g2D.draw(petala6);

        g2D.setColor(color);
        Ellipse2D.Double centru = new Ellipse2D.Double(x, y, size, size);
        g2D.setColor(Color.yellow);
        g2D.fill(centru);
        g2D.setColor(Color.black);
        g2D.draw(centru);

        g2D.rotate(Math.toRadians(60), x + size * 0.5, y + size * 0.5);
    }
}
