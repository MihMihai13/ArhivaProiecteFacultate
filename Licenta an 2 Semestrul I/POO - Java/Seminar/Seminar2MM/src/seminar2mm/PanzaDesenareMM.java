/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package seminar2mm;

import java.awt.*;//clasele Color si Graphics
import java.awt.geom.*;//pentru crearea formelor geometrice
import javax.swing.*;

/**
 *
 * @author mihai
 */
public class PanzaDesenareMM extends JComponent {

    private int width, height;
    private NorMM n1, n2, n3;

    public PanzaDesenareMM(int width, int height) {
        this.width = width;
        this.height = height;
        n1 = new NorMM(10, 50, 75, Color.LIGHT_GRAY);
        n2 = new NorMM(200, 75, 90, Color.BLUE);
        n3 = new NorMM(420, 60, 85, Color.DARK_GRAY);
    }

    @Override
    protected void paintComponent(Graphics g) {
        Graphics2D g2D = (Graphics2D) g;
        RenderingHints rh = new RenderingHints(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
        g2D.setRenderingHints(rh);
        Rectangle2D.Double r = new Rectangle2D.Double(0, 0, width, height);
        g2D.setColor(Color.CYAN);
        g2D.fill(r);
        n1.desenareNorMM(g2D);
        n2.desenareNorMM(g2D);
        n3.desenareNorMM(g2D);
        /*
        Ellipse2D.Double e = new Ellipse2D.Double(200, 75, 100, 100);
        g2D.setColor(Color.RED);
        g2D.fill(e);

        Line2D.Double line = new Line2D.Double(100, 250, 300, 75);
        g2D.setColor(Color.BLACK);
        g2D.setStroke(new BasicStroke(5));//setarea grosimii liniei
        g2D.draw(line);
        g2D.setColor(Color.BLUE);
        g2D.draw(e);
         */
        //Elipsele urmatoare au parametri diferiti, culoare comuna. Suprapuse, creeaza forma unui nor.
        /*
        Ellipse2D.Double e1 = new Ellipse2D.Double(200, 75, 100, 100);
        Ellipse2D.Double e2 = new Ellipse2D.Double(235, 55, 175, 140);
        Ellipse2D.Double e3 = new Ellipse2D.Double(350, 90, 90, 90);
        Ellipse2D.Double e4 = new Ellipse2D.Double(380, 80, 30, 30);
        g2D.setColor(Color.BLUE);
        g2D.fill(e1);
        g2D.fill(e2);
        g2D.fill(e3);
        g2D.fill(e4);
         */
    }
}
