/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JFrame.java to edit this template
 */
package pianvirtualmm;

/**
 *
 * @author mihai
 */
import java.io.File;
import java.io.IOException;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.sound.sampled.AudioInputStream;
import javax.sound.sampled.AudioSystem;
import javax.sound.sampled.Clip;
import javax.sound.sampled.LineUnavailableException;
import javax.sound.sampled.UnsupportedAudioFileException;

public class PianVirtualMM extends javax.swing.JFrame {

    /**
     * Creates new form PianVirtualMM
     */
    public PianVirtualMM() {
        initComponents();
    }

    private void notePianoC() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-pian\\Pian-C.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void notePianoCD() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-pian\\Pian-Cdiez.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void notePianoD() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-pian\\Pian-D.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void notePianoDD() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-pian\\Pian-Ddiez.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void notePianoE() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-pian\\Pian-E.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void notePianoF() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-pian\\Pian-F.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void notePianoFD() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-pian\\Pian-Fdiez.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void notePianoG() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-pian\\Pian-G.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void notePianoGD() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-pian\\Pian-Gdiez.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void notePianoA() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-pian\\Pian-A.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void notePianoAD() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-pian\\Pian-Adiez.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void notePianoB() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-pian\\Pian-B.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void notePianoC1() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-pian\\Pian-C.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void notePianoCD1() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-pian\\Pian-Cdiez.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void notePianoD1() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-pian\\Pian-D.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void notePianoDD1() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-pian\\Pian-Ddiez.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void notePianoE1() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-pian\\Pian-E.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void notePianoF1() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-pian\\Pian-F.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void noteViolinC() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-vioara\\Vioara-C.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void noteViolinCD() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-vioara\\Vioara-Cdiez.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void noteViolinD() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-vioara\\Vioara-D.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void noteViolinDD() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-vioara\\Vioara-Ddiez.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void noteViolinE() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-vioara\\Vioara-E.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void noteViolinF() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-vioara\\Vioara-F.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void noteViolinFD() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-vioara\\Vioara-Fdiez.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void noteViolinG() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-vioara\\Vioara-G.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void noteViolinGD() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-vioara\\Vioara-Gdiez.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void noteViolinA() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-vioara\\Vioara-A.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void noteViolinAD() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-vioara\\Vioara-Adiez.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void noteViolinB() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-vioara\\Vioara-B.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void noteViolinC1() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-vioara\\Vioara-C.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void noteViolinCD1() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-vioara\\Vioara-Ddiez.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void noteViolinD1() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-vioara\\Vioara-D.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void noteViolinDD1() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-vioara\\Vioara-Ddiez.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void noteViolinE1() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-vioara\\Vioara-E.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    private void noteViolinF1() throws UnsupportedAudioFileException, IOException, LineUnavailableException {
        File file = new File(".\\Note-vioara\\Vioara-F.wav");
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        buttonGroup1 = new javax.swing.ButtonGroup();
        jButtonDD1 = new javax.swing.JButton();
        jButtonDD = new javax.swing.JButton();
        jButtonFD = new javax.swing.JButton();
        jButtonGD = new javax.swing.JButton();
        jButtonAD = new javax.swing.JButton();
        jButtonCD1 = new javax.swing.JButton();
        jButtonCD = new javax.swing.JButton();
        jButtonD1 = new javax.swing.JButton();
        jButtonC1 = new javax.swing.JButton();
        jButtonB = new javax.swing.JButton();
        jButtonA = new javax.swing.JButton();
        jButtonG = new javax.swing.JButton();
        jButtonF = new javax.swing.JButton();
        jButtonE = new javax.swing.JButton();
        jButtonE1 = new javax.swing.JButton();
        jButtonF1 = new javax.swing.JButton();
        jButtonC = new javax.swing.JButton();
        jButtonD = new javax.swing.JButton();
        jckbPian = new javax.swing.JCheckBox();
        jckbVioara = new javax.swing.JCheckBox();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setMinimumSize(new java.awt.Dimension(900, 350));
        setPreferredSize(new java.awt.Dimension(900, 350));
        getContentPane().setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jButtonDD1.setBackground(new java.awt.Color(0, 0, 0));
        jButtonDD1.setFont(new java.awt.Font("Times New Roman", 1, 24)); // NOI18N
        jButtonDD1.setForeground(new java.awt.Color(255, 255, 255));
        jButtonDD1.setText("D1#");
        jButtonDD1.setVerticalAlignment(javax.swing.SwingConstants.BOTTOM);
        jButtonDD1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonDD1ActionPerformed(evt);
            }
        });
        getContentPane().add(jButtonDD1, new org.netbeans.lib.awtextra.AbsoluteConstraints(650, 70, 75, 150));

        jButtonDD.setBackground(new java.awt.Color(0, 0, 0));
        jButtonDD.setFont(new java.awt.Font("Times New Roman", 1, 24)); // NOI18N
        jButtonDD.setForeground(new java.awt.Color(255, 255, 255));
        jButtonDD.setText("D#");
        jButtonDD.setVerticalAlignment(javax.swing.SwingConstants.BOTTOM);
        jButtonDD.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonDDActionPerformed(evt);
            }
        });
        getContentPane().add(jButtonDD, new org.netbeans.lib.awtextra.AbsoluteConstraints(170, 70, 75, 150));

        jButtonFD.setBackground(new java.awt.Color(0, 0, 0));
        jButtonFD.setFont(new java.awt.Font("Times New Roman", 1, 24)); // NOI18N
        jButtonFD.setForeground(new java.awt.Color(255, 255, 255));
        jButtonFD.setText("F#");
        jButtonFD.setVerticalAlignment(javax.swing.SwingConstants.BOTTOM);
        jButtonFD.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonFDActionPerformed(evt);
            }
        });
        getContentPane().add(jButtonFD, new org.netbeans.lib.awtextra.AbsoluteConstraints(300, 70, 75, 150));

        jButtonGD.setBackground(new java.awt.Color(0, 0, 0));
        jButtonGD.setFont(new java.awt.Font("Times New Roman", 1, 24)); // NOI18N
        jButtonGD.setForeground(new java.awt.Color(255, 255, 255));
        jButtonGD.setText("G#");
        jButtonGD.setVerticalAlignment(javax.swing.SwingConstants.BOTTOM);
        jButtonGD.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonGDActionPerformed(evt);
            }
        });
        getContentPane().add(jButtonGD, new org.netbeans.lib.awtextra.AbsoluteConstraints(370, 70, 75, 150));

        jButtonAD.setBackground(new java.awt.Color(0, 0, 0));
        jButtonAD.setFont(new java.awt.Font("Times New Roman", 1, 24)); // NOI18N
        jButtonAD.setForeground(new java.awt.Color(255, 255, 255));
        jButtonAD.setText("A#");
        jButtonAD.setVerticalAlignment(javax.swing.SwingConstants.BOTTOM);
        jButtonAD.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonADActionPerformed(evt);
            }
        });
        getContentPane().add(jButtonAD, new org.netbeans.lib.awtextra.AbsoluteConstraints(440, 70, 75, 150));

        jButtonCD1.setBackground(new java.awt.Color(0, 0, 0));
        jButtonCD1.setFont(new java.awt.Font("Times New Roman", 1, 24)); // NOI18N
        jButtonCD1.setForeground(new java.awt.Color(255, 255, 255));
        jButtonCD1.setText("C1#");
        jButtonCD1.setVerticalAlignment(javax.swing.SwingConstants.BOTTOM);
        jButtonCD1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonCD1ActionPerformed(evt);
            }
        });
        getContentPane().add(jButtonCD1, new org.netbeans.lib.awtextra.AbsoluteConstraints(580, 70, 75, 150));

        jButtonCD.setBackground(new java.awt.Color(0, 0, 0));
        jButtonCD.setFont(new java.awt.Font("Times New Roman", 1, 24)); // NOI18N
        jButtonCD.setForeground(new java.awt.Color(255, 255, 255));
        jButtonCD.setText("C#");
        jButtonCD.setVerticalAlignment(javax.swing.SwingConstants.BOTTOM);
        jButtonCD.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonCDActionPerformed(evt);
            }
        });
        getContentPane().add(jButtonCD, new org.netbeans.lib.awtextra.AbsoluteConstraints(100, 70, 75, 150));

        jButtonD1.setBackground(new java.awt.Color(255, 255, 255));
        jButtonD1.setFont(new java.awt.Font("Times New Roman", 1, 24)); // NOI18N
        jButtonD1.setForeground(new java.awt.Color(0, 0, 0));
        jButtonD1.setText("D1");
        jButtonD1.setVerticalAlignment(javax.swing.SwingConstants.BOTTOM);
        jButtonD1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonD1ActionPerformed(evt);
            }
        });
        getContentPane().add(jButtonD1, new org.netbeans.lib.awtextra.AbsoluteConstraints(620, 70, 75, 250));

        jButtonC1.setBackground(new java.awt.Color(255, 255, 255));
        jButtonC1.setFont(new java.awt.Font("Times New Roman", 1, 24)); // NOI18N
        jButtonC1.setForeground(new java.awt.Color(0, 0, 0));
        jButtonC1.setText("C1");
        jButtonC1.setVerticalAlignment(javax.swing.SwingConstants.BOTTOM);
        jButtonC1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonC1ActionPerformed(evt);
            }
        });
        getContentPane().add(jButtonC1, new org.netbeans.lib.awtextra.AbsoluteConstraints(550, 70, 75, 250));

        jButtonB.setBackground(new java.awt.Color(255, 255, 255));
        jButtonB.setFont(new java.awt.Font("Times New Roman", 1, 24)); // NOI18N
        jButtonB.setForeground(new java.awt.Color(0, 0, 0));
        jButtonB.setText("B");
        jButtonB.setVerticalAlignment(javax.swing.SwingConstants.BOTTOM);
        jButtonB.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonBActionPerformed(evt);
            }
        });
        getContentPane().add(jButtonB, new org.netbeans.lib.awtextra.AbsoluteConstraints(480, 70, 75, 250));

        jButtonA.setBackground(new java.awt.Color(255, 255, 255));
        jButtonA.setFont(new java.awt.Font("Times New Roman", 1, 24)); // NOI18N
        jButtonA.setForeground(new java.awt.Color(0, 0, 0));
        jButtonA.setText("A");
        jButtonA.setVerticalAlignment(javax.swing.SwingConstants.BOTTOM);
        jButtonA.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonAActionPerformed(evt);
            }
        });
        getContentPane().add(jButtonA, new org.netbeans.lib.awtextra.AbsoluteConstraints(410, 70, 75, 250));

        jButtonG.setBackground(new java.awt.Color(255, 255, 255));
        jButtonG.setFont(new java.awt.Font("Times New Roman", 1, 24)); // NOI18N
        jButtonG.setForeground(new java.awt.Color(0, 0, 0));
        jButtonG.setText("G");
        jButtonG.setVerticalAlignment(javax.swing.SwingConstants.BOTTOM);
        jButtonG.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonGActionPerformed(evt);
            }
        });
        getContentPane().add(jButtonG, new org.netbeans.lib.awtextra.AbsoluteConstraints(340, 70, 75, 250));

        jButtonF.setBackground(new java.awt.Color(255, 255, 255));
        jButtonF.setFont(new java.awt.Font("Times New Roman", 1, 24)); // NOI18N
        jButtonF.setForeground(new java.awt.Color(0, 0, 0));
        jButtonF.setText("F");
        jButtonF.setVerticalAlignment(javax.swing.SwingConstants.BOTTOM);
        jButtonF.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonFActionPerformed(evt);
            }
        });
        getContentPane().add(jButtonF, new org.netbeans.lib.awtextra.AbsoluteConstraints(270, 70, 75, 250));

        jButtonE.setBackground(new java.awt.Color(255, 255, 255));
        jButtonE.setFont(new java.awt.Font("Times New Roman", 1, 24)); // NOI18N
        jButtonE.setForeground(new java.awt.Color(0, 0, 0));
        jButtonE.setText("E");
        jButtonE.setVerticalAlignment(javax.swing.SwingConstants.BOTTOM);
        jButtonE.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonEActionPerformed(evt);
            }
        });
        getContentPane().add(jButtonE, new org.netbeans.lib.awtextra.AbsoluteConstraints(200, 70, 75, 250));

        jButtonE1.setBackground(new java.awt.Color(255, 255, 255));
        jButtonE1.setFont(new java.awt.Font("Times New Roman", 1, 24)); // NOI18N
        jButtonE1.setForeground(new java.awt.Color(0, 0, 0));
        jButtonE1.setText("E1");
        jButtonE1.setVerticalAlignment(javax.swing.SwingConstants.BOTTOM);
        jButtonE1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonE1ActionPerformed(evt);
            }
        });
        getContentPane().add(jButtonE1, new org.netbeans.lib.awtextra.AbsoluteConstraints(690, 70, 75, 250));

        jButtonF1.setBackground(new java.awt.Color(255, 255, 255));
        jButtonF1.setFont(new java.awt.Font("Times New Roman", 1, 24)); // NOI18N
        jButtonF1.setForeground(new java.awt.Color(0, 0, 0));
        jButtonF1.setText("F1");
        jButtonF1.setVerticalAlignment(javax.swing.SwingConstants.BOTTOM);
        jButtonF1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonF1ActionPerformed(evt);
            }
        });
        getContentPane().add(jButtonF1, new org.netbeans.lib.awtextra.AbsoluteConstraints(760, 70, 75, 250));

        jButtonC.setBackground(new java.awt.Color(255, 255, 255));
        jButtonC.setFont(new java.awt.Font("Times New Roman", 1, 24)); // NOI18N
        jButtonC.setForeground(new java.awt.Color(0, 0, 0));
        jButtonC.setText("C");
        jButtonC.setVerticalAlignment(javax.swing.SwingConstants.BOTTOM);
        jButtonC.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonCActionPerformed(evt);
            }
        });
        getContentPane().add(jButtonC, new org.netbeans.lib.awtextra.AbsoluteConstraints(60, 70, 75, 250));

        jButtonD.setBackground(new java.awt.Color(255, 255, 255));
        jButtonD.setFont(new java.awt.Font("Times New Roman", 1, 24)); // NOI18N
        jButtonD.setForeground(new java.awt.Color(0, 0, 0));
        jButtonD.setText("D");
        jButtonD.setVerticalAlignment(javax.swing.SwingConstants.BOTTOM);
        jButtonD.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButtonDActionPerformed(evt);
            }
        });
        getContentPane().add(jButtonD, new org.netbeans.lib.awtextra.AbsoluteConstraints(130, 70, 75, 250));

        buttonGroup1.add(jckbPian);
        jckbPian.setFont(new java.awt.Font("Times New Roman", 1, 24)); // NOI18N
        jckbPian.setForeground(new java.awt.Color(0, 0, 255));
        jckbPian.setText("TON PIAN");
        getContentPane().add(jckbPian, new org.netbeans.lib.awtextra.AbsoluteConstraints(170, 20, -1, -1));

        buttonGroup1.add(jckbVioara);
        jckbVioara.setFont(new java.awt.Font("Times New Roman", 1, 24)); // NOI18N
        jckbVioara.setForeground(new java.awt.Color(255, 0, 51));
        jckbVioara.setText("TON VIOARA");
        getContentPane().add(jckbVioara, new org.netbeans.lib.awtextra.AbsoluteConstraints(380, 20, -1, -1));

        pack();
        setLocationRelativeTo(null);
    }// </editor-fold>//GEN-END:initComponents

    private void jButtonDD1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonDD1ActionPerformed
        // TODO add your handling code here:
        try {
            // TODO add your handling code here:
            if (jckbPian.isSelected()) {
                notePianoDD1();
            } else {
                noteViolinDD1();
            }
        } catch (UnsupportedAudioFileException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (LineUnavailableException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_jButtonDD1ActionPerformed

    private void jButtonD1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonD1ActionPerformed
        // TODO add your handling code here:
        try {
            // TODO add your handling code here:
            if (jckbPian.isSelected()) {
                notePianoD();
            } else {
                noteViolinD();
            }

        } catch (UnsupportedAudioFileException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (LineUnavailableException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_jButtonD1ActionPerformed

    private void jButtonDDActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonDDActionPerformed
        // TODO add your handling code here:
        try {
            // TODO add your handling code here:
            if (jckbPian.isSelected()) {
                notePianoDD();
            } else {
                noteViolinDD();
            }

        } catch (UnsupportedAudioFileException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (LineUnavailableException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_jButtonDDActionPerformed

    private void jButtonFDActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonFDActionPerformed
        // TODO add your handling code here:
        try {
            // TODO add your handling code here:
            if (jckbPian.isSelected()) {
                notePianoFD();
            } else {
                noteViolinFD();
            }

        } catch (UnsupportedAudioFileException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (LineUnavailableException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_jButtonFDActionPerformed

    private void jButtonGDActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonGDActionPerformed
        // TODO add your handling code here:
        try {
            // TODO add your handling code here:
            if (jckbPian.isSelected()) {
                notePianoGD();
            } else {
                noteViolinGD();
            }

        } catch (UnsupportedAudioFileException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (LineUnavailableException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_jButtonGDActionPerformed

    private void jButtonADActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonADActionPerformed
        // TODO add your handling code here:
        try {
            // TODO add your handling code here:
            if (jckbPian.isSelected()) {
                notePianoAD();
            } else {
                noteViolinAD();
            }

        } catch (UnsupportedAudioFileException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (LineUnavailableException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_jButtonADActionPerformed

    private void jButtonCD1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonCD1ActionPerformed
        // TODO add your handling code here:
        try {
            // TODO add your handling code here:
            if (jckbPian.isSelected()) {
                notePianoCD();
            } else {
                noteViolinCD();
            }

        } catch (UnsupportedAudioFileException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (LineUnavailableException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_jButtonCD1ActionPerformed

    private void jButtonCDActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonCDActionPerformed
        try {
            // TODO add your handling code here:
            if (jckbPian.isSelected()) {
                notePianoCD();
            } else {
                noteViolinCD();
            }

        } catch (UnsupportedAudioFileException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (LineUnavailableException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_jButtonCDActionPerformed

    private void jButtonC1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonC1ActionPerformed
        // TODO add your handling code here:
        try {
            // TODO add your handling code here:
            if (jckbPian.isSelected()) {
                notePianoC();
            } else {
                noteViolinC();
            }

        } catch (UnsupportedAudioFileException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (LineUnavailableException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_jButtonC1ActionPerformed

    private void jButtonBActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonBActionPerformed
        // TODO add your handling code here:
        try {
            // TODO add your handling code here:
            if (jckbPian.isSelected()) {
                notePianoB();
            } else {
                noteViolinB();
            }

        } catch (UnsupportedAudioFileException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (LineUnavailableException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_jButtonBActionPerformed

    private void jButtonAActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonAActionPerformed
        // TODO add your handling code here:
        try {
            // TODO add your handling code here:
            if (jckbPian.isSelected()) {
                notePianoA();
            } else {
                noteViolinA();
            }

        } catch (UnsupportedAudioFileException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (LineUnavailableException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_jButtonAActionPerformed

    private void jButtonGActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonGActionPerformed
        // TODO add your handling code here:
        try {
            // TODO add your handling code here:
            if (jckbPian.isSelected()) {
                notePianoG();
            } else {
                noteViolinG();
            }

        } catch (UnsupportedAudioFileException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (LineUnavailableException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_jButtonGActionPerformed

    private void jButtonFActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonFActionPerformed
        // TODO add your handling code here:
        try {
            // TODO add your handling code here:
            if (jckbPian.isSelected()) {
                notePianoF();
            } else {
                noteViolinF();
            }

        } catch (UnsupportedAudioFileException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (LineUnavailableException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_jButtonFActionPerformed

    private void jButtonEActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonEActionPerformed
        // TODO add your handling code here:
        try {
            // TODO add your handling code here:
            if (jckbPian.isSelected()) {
                notePianoE();
            } else {
                noteViolinE();
            }

        } catch (UnsupportedAudioFileException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (LineUnavailableException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_jButtonEActionPerformed

    private void jButtonE1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonE1ActionPerformed
        // TODO add your handling code here:
        try {
            // TODO add your handling code here:
            if (jckbPian.isSelected()) {
                notePianoE();
            } else {
                noteViolinE();
            }

        } catch (UnsupportedAudioFileException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (LineUnavailableException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_jButtonE1ActionPerformed

    private void jButtonF1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonF1ActionPerformed
        // TODO add your handling code here:
        try {
            // TODO add your handling code here:
            if (jckbPian.isSelected()) {
                notePianoF();
            } else {
                noteViolinF();
            }

        } catch (UnsupportedAudioFileException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (LineUnavailableException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_jButtonF1ActionPerformed

    private void jButtonCActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonCActionPerformed
        // TODO add your handling code here:
        try {
            // TODO add your handling code here:
            if (jckbPian.isSelected()) {
                notePianoC();
            } else {
                noteViolinC();
            }

        } catch (UnsupportedAudioFileException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (LineUnavailableException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_jButtonCActionPerformed

    private void jButtonDActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButtonDActionPerformed
        // TODO add your handling code here:
        try {
            // TODO add your handling code here:
            if (jckbPian.isSelected()) {
                notePianoD();
            } else {
                noteViolinD();
            }

        } catch (UnsupportedAudioFileException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        } catch (LineUnavailableException ex) {
            Logger.getLogger(PianVirtualMM.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_jButtonDActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(PianVirtualMM.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(PianVirtualMM.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(PianVirtualMM.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(PianVirtualMM.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new PianVirtualMM().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.ButtonGroup buttonGroup1;
    private javax.swing.JButton jButtonA;
    private javax.swing.JButton jButtonAD;
    private javax.swing.JButton jButtonB;
    private javax.swing.JButton jButtonC;
    private javax.swing.JButton jButtonC1;
    private javax.swing.JButton jButtonCD;
    private javax.swing.JButton jButtonCD1;
    private javax.swing.JButton jButtonD;
    private javax.swing.JButton jButtonD1;
    private javax.swing.JButton jButtonDD;
    private javax.swing.JButton jButtonDD1;
    private javax.swing.JButton jButtonE;
    private javax.swing.JButton jButtonE1;
    private javax.swing.JButton jButtonF;
    private javax.swing.JButton jButtonF1;
    private javax.swing.JButton jButtonFD;
    private javax.swing.JButton jButtonG;
    private javax.swing.JButton jButtonGD;
    private javax.swing.JCheckBox jckbPian;
    private javax.swing.JCheckBox jckbVioara;
    // End of variables declaration//GEN-END:variables
}
