package seminar3mm;

import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.RenderingHints;
import java.awt.geom.AffineTransform;
import java.awt.geom.Arc2D;
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
        RenderingHints rh = new RenderingHints(RenderingHints.KEY_ANTIALIASING,
                RenderingHints.VALUE_ANTIALIAS_ON);
        g2D.setRenderingHints(rh);
        //definim fondul pe care desenam
        Rectangle2D.Double bgr = new Rectangle2D.Double(0, 0, width, height);
        g2D.setColor(Color.CYAN);
        g2D.fill(bgr);
        
//        Path2D.Double p = new Path2D.Double(); //import java.awt.geom.Path2D;
////path=mulțime de segmente conectate
//        p.moveTo(100, 300);//permite setarea punctului de pornire, e analog cu ridicarea creionului de
////pe foaie și mutarea lui la o alta locatie fara scriere/trasarea unui segment în acest proces
//        p.lineTo(150, 200);//permite setarea punctului final pentru primul segment
//        //Aceasta intructiune creează un segment de dreapta unind cele doua puncte (cel anterior lui
////lineTo si cel din argumentul metodei lineTo)
//        //Pentru a trasa mai multe segmente, folosim de mai multe ori metoda lineToF
//        p.lineTo(200, 300);
//        p.closePath();//închide linia franta pentru a forma un triunghi/poligon
//        g2D.setColor(Color.RED);
//        g2D.fill(p); //umple conturul
//        g2D.setStroke(new BasicStroke(5)); //import java.awt.BasicStroke;
//        g2D.setColor(Color.BLACK);
//        g2D.draw(p); //deseneaza conturul 
//
//        Path2D.Double curve = new Path2D.Double();
//        curve.moveTo(250, 400);
//        curve.curveTo(350, 300, 500, 300, 600, 400);
////Testati cu primele doua argumente 100,200
//        g2D.draw(curve);
//
//        //Sirul urmator de instructiuni creeaza forma unei inimi
//        Path2D.Double heart = new Path2D.Double();
//        heart.moveTo(328, 256);
//        heart.curveTo(329, 204, 397, 199, 401, 252);
//        heart.curveTo(413, 201, 468, 198, 466, 250);
//        heart.curveTo(465, 304, 415, 345, 402, 350);
//        heart.curveTo(388, 346, 328, 308, 328, 256);
//        g2D.setColor(Color.RED);
//        g2D.fill(heart);
//
//        Rectangle2D.Double r1 = new Rectangle2D.Double(0, 0, 100, 100);
//        Rectangle2D.Double r2 = new Rectangle2D.Double(100, 150, 100, 100);
//        Rectangle2D.Double r3 = new Rectangle2D.Double(50, 50, 50, 50);
//        AffineTransform record = g2D.getTransform();//import java.awt.geom.AffineTransform;
////defineste an AffineTransform object
////retine transformarile afine (translatiile, rotatiile) efectuate dupa instructiunea rosie
////pana la apelul metodei setTransform
////Este alta modalitate de a reseta translația în 0,0, echivalentă cu instructiunea mov.
////Se foloseste alaturi de linia mov comentată și înlocuirea ei cu g2D.setTransform(record);
//        g2D.setColor(Color.BLUE);
//        g2D.translate(150, 100); //componentele vectorului de translație
//        //translate trebuie apelat înaintea metodelor draw sau fill
//        //Prin translatie, JFrame-ul isi mentine aspectul și ne-o putem imagina și prin faptul că
////(0,0) rămâne în coltul din stanga-sus al dreptunghiului r1,
////dar colțul stânga-sus al frame-ului devine (-150,-100)
//        g2D.fill(r1);
//        g2D.fill(r2); //tot ce se vizualizează cu fill/draw după apelul metodei translate va fi translatat
//        g2D.translate(300, 200); //dupa al doilea apel al translate, se concatenează cele două translatii,
////r3 e translatat pe directia 450,300
//        g2D.fill(r3);
////Pentru a reveni la (0,0) in colțul stânga-sus, negăm toate translațiile făcute
////g2D.translate(-450,-300); //nu afecteaza pozitia dreptunghiurilor
//        //r1, r2, r3 desenate anterior translației inapoi in (0,0)
//        g2D.setTransform(record);
////avantajul folosirii obiectelor de tip AffineTransform este că reseteaza transformările fara sa mai stam noi sa cumulam / calculăm coordonatele x, y ale translatiilor de pe parcurs g2D.fill(r1);
//         
 
////ROTATIE IN JURUL COLTULUI STANGA-SUS AL FOII DE HARTIE
//        Rectangle2D.Double r = new Rectangle2D.Double(250, 200, 50, 50);
//        g2D.rotate(Math.toRadians(15));//rotatie in jurul pivotului 0,0
//        g2D.setColor(Color.BLUE);
//        g2D.fill(r);
//         
        //ROTATIE IN JURUL COLTULUI STANGA-SUS DREPTUNGHI
//        Rectangle2D.Double r = new Rectangle2D.Double(250, 200, 50, 50);
//        g2D.rotate(Math.toRadians(15), 250, 200);
////rotatie in jurul punctului 250,200
//        g2D.setColor(Color.BLUE);
//        g2D.fill(r);

//        g2D.setColor(Color.MAGENTA);
//        int grosime = 5;
//        float punctat1[] = {10, 10};
//        float punctat2[] = {30, 30, 10, 30};
//        float punctat3[] = {10, 10, 10, 50};
//        float punctat4[] = {50};
//        float punctat5[] = {4};
//
//        g2D.setStroke(new BasicStroke(grosime, BasicStroke.CAP_ROUND,
//                BasicStroke.JOIN_ROUND, 0, punctat1, 0));
//        g2D.drawLine(50, 50, 150, 300);
//
//        g2D.setStroke(new BasicStroke(grosime, BasicStroke.CAP_BUTT,
//                BasicStroke.JOIN_BEVEL, 0, punctat2, 0));
//        g2D.drawLine(150, 50, 250, 300);
//
//        g2D.setStroke(new BasicStroke(grosime, BasicStroke.CAP_SQUARE,
//                BasicStroke.JOIN_BEVEL, 0, punctat3, 0));
//        g2D.drawLine(250, 50, 350, 300);
//
//        g2D.setStroke(new BasicStroke(grosime, BasicStroke.CAP_ROUND,
//                BasicStroke.JOIN_ROUND, 0, punctat4, 0));
//        g2D.drawLine(350, 50, 450, 300);
//
//        g2D.setStroke(new BasicStroke(grosime, BasicStroke.CAP_ROUND,
//                BasicStroke.JOIN_ROUND, 0, punctat5, 0));
//        g2D.drawLine(450, 50, 550, 300);
        g2D.setColor(Color.RED);
        g2D.setStroke(new BasicStroke(6.0f));
        Arc2D.Double arc1 = new Arc2D.Double(50, 50, 150, 150, 0, 270, Arc2D.CHORD);
        Arc2D.Double arc2 = new Arc2D.Double(250, 50, 150, 150, 0, 270, Arc2D.OPEN);
        Arc2D.Double arc3 = new Arc2D.Double(450, 50, 150, 100, 30, 240, Arc2D.PIE);
        g2D.draw(arc1);
        g2D.draw(arc2);
        g2D.fill(arc3);
    }
}
