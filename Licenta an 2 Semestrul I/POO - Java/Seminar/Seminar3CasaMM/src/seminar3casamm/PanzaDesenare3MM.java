package seminar3casamm;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.RenderingHints;
import java.awt.geom.AffineTransform;
import java.awt.geom.Path2D;
import java.awt.geom.Rectangle2D;
import javax.swing.JComponent;

public class PanzaDesenare3MM extends JComponent {

    private int width, height;

    public PanzaDesenare3MM(int width, int height) {
        this.width = width;
        this.height = height;
    }

    @Override
    protected void paintComponent(Graphics g) {
        Graphics2D g2D = (Graphics2D) g;

        //randarea/netezirea curbelor
        RenderingHints rh = new RenderingHints(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
        g2D.setRenderingHints(rh);

        AffineTransform record = g2D.getTransform();

        Path2D.Double acoperis = new Path2D.Double();
        acoperis.moveTo(50, 10);
        acoperis.lineTo(200, 10);
        acoperis.lineTo(240, 70);
        acoperis.lineTo(10, 70);
        acoperis.closePath();
        g2D.setColor(Color.RED);
        g2D.fill(acoperis);

        Rectangle2D.Double casa = new Rectangle2D.Double(50, 70, 150, 150);
        g2D.setColor(Color.GRAY);
        g2D.fill(casa);

        Rectangle2D.Double fereastra = new Rectangle2D.Double(60, 80, 50, 50);
        g2D.setColor(Color.CYAN);
        g2D.fill(fereastra);
        g2D.translate(80, 0);
        g2D.fill(fereastra);
        g2D.translate(-80, 0);

        Rectangle2D.Double usa = new Rectangle2D.Double(100, 150, 50, 70);
        g2D.setColor(Color.ORANGE);
        g2D.fill(usa);

        //casa translatata la dreapta
        g2D.translate(300, 0);
        g2D.setColor(Color.RED);
        g2D.fill(acoperis);
        g2D.setColor(Color.GRAY);
        g2D.fill(casa);
        g2D.setColor(Color.CYAN);
        g2D.fill(fereastra);
        g2D.translate(80, 0);
        g2D.fill(fereastra);
        g2D.translate(-80, 0);
        g2D.setColor(Color.ORANGE);
        g2D.fill(usa);

        g2D.setTransform(record);

        //casa translatata in jos si rotita
        g2D.translate(0, 300);
        g2D.rotate(Math.toRadians(45), 125, 125);
        g2D.setColor(Color.RED);
        g2D.fill(acoperis);
        g2D.setColor(Color.GRAY);
        g2D.fill(casa);
        g2D.setColor(Color.CYAN);
        g2D.fill(fereastra);
        g2D.translate(80, 0);
        g2D.fill(fereastra);
        g2D.translate(-80, 0);
        g2D.setColor(Color.ORANGE);
        g2D.fill(usa);
    }
}
