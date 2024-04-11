package seminar3temamm;

import javax.swing.JFrame;

public class DesenareMain3MM {

    public static void main(String[] args) {
        int w = 640, h = 480;//lungimea width=w, inaltimea height=h a frame-ului
        //JFrame f=new JFrame();
        //f.setTitle("Azi desenam in Java");
        JFrame f = new JFrame("Azi desenam in Java");
        PanzaDesenare3MM pd = new PanzaDesenare3MM(w, h);
        f.add(pd);
        f.setSize(w, h);
        f.setLocationRelativeTo(null); //pune GUI in mijlocul ecranului
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setVisible(true);
    }
}
