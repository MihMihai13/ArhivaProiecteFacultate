package seminar3temamm;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.RenderingHints;
import java.awt.geom.AffineTransform;
import java.awt.geom.Path2D;
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

        Path2D.Double p = new Path2D.Double();
        p.moveTo(60, 10);
        p.lineTo(110, 100);
        p.lineTo(60, 200);
        p.lineTo(10, 100);
        p.closePath();
        g2D.setColor(Color.GREEN);
        g2D.fill(p);

        g2D.translate(150, 0);
        g2D.setColor(Color.ORANGE);
        g2D.fill(p);

        g2D.translate(150, 0);
        g2D.setColor(Color.RED);
        g2D.fill(p);

        g2D.translate(-300, 0);
        g2D.translate(0, 200);
        g2D.setColor(Color.CYAN);
        g2D.fill(p);

        g2D.translate(150, 0);
        g2D.setColor(Color.BLUE);
        g2D.fill(p);

        g2D.translate(150, 0);
        g2D.setColor(Color.MAGENTA);
        g2D.fill(p);
    }
}
