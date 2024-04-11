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
    private Floare f1, f2, f3, f4;

    public PanzaDesenareMM(int width, int height) {
        this.width = width;
        this.height = height;
        f1 = new Floare(100, 100, 25, Color.MAGENTA);
        f2 = new Floare(400, 50, 30, Color.RED);
        f3 = new Floare(500, 350, 10, Color.PINK);
        f4 = new Floare(200, 290, 50, Color.WHITE);
    }

    @Override
    protected void paintComponent(Graphics g) {
        Graphics2D g2D = (Graphics2D) g;
        RenderingHints rh = new RenderingHints(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
        g2D.setRenderingHints(rh);
        Rectangle2D.Double r = new Rectangle2D.Double(0, 0, width, height);
        g2D.setColor(Color.black);
        g2D.fill(r);
        f1.desenareFloare(g2D);
        f2.desenareFloare(g2D);
        f3.desenareFloare(g2D);
        f4.desenareFloare(g2D);
    }
}
