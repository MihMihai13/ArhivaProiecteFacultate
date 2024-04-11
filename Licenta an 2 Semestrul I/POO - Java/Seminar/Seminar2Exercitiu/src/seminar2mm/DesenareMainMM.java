/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package seminar2mm;

import javax.swing.JFrame;

/**
 *
 * @author mihai
 */
public class DesenareMainMM {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int w = 640, h = 480;//lungimea width=w, inaltimea height=h a frame-ului
        JFrame f = new JFrame();
        PanzaDesenareMM pd = new PanzaDesenareMM(w, h);
        f.add(pd);
        f.setSize(w, h);
        f.setTitle("Exercitiu seminar 2");
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.setVisible(true);
    }

}
