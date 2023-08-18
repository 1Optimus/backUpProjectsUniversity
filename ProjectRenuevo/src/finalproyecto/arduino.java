/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package finalproyecto;
import java.util.logging.Level;
import java.util.logging.Logger;
import panamahitek.Arduino.PanamaHitek_Arduino;

/**
 *
 * @author Sergio Orozco
 */
public class arduino extends javax.swing.JPanel {
    
    PanamaHitek_Arduino arduinos=new PanamaHitek_Arduino();
    public arduino() {
        initComponents();
        cubee.setVisible(false);
        prismm.setVisible(false);
        pyramidd.setVisible(false);
        piramid3.setVisible(false);
        cilindro.setVisible(false);
        paralele.setVisible(false);
       
        enviar.setVisible(false);
        combo.setVisible(false);
        check1.setVisible(false);
        check2.setVisible(false);
       
       respuesta.setVisible(false);
       respuesta2.setVisible(false);
       opciones.setVisible(false);
       opciones2.setVisible(false);
        try {
         arduinos.arduinoTX("COM9", 9600);
        
        } catch (Exception e) {
            Logger.getLogger(arduino.class.getName()).log(Level.SEVERE,null,e);
        }
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        cubee = new javax.swing.JRadioButton();
        pyramidd = new javax.swing.JRadioButton();
        prismm = new javax.swing.JRadioButton();
        enviar = new javax.swing.JButton();
        shapes = new javax.swing.JRadioButton();
        lcdask = new javax.swing.JRadioButton();
        combo = new javax.swing.JComboBox<>();
        check1 = new javax.swing.JCheckBox();
        check2 = new javax.swing.JCheckBox();
        opciones = new javax.swing.JLabel();
        respuesta = new javax.swing.JLabel();
        opciones2 = new javax.swing.JLabel();
        respuesta2 = new javax.swing.JLabel();
        piramid3 = new javax.swing.JRadioButton();
        paralele = new javax.swing.JRadioButton();
        cilindro = new javax.swing.JRadioButton();
        jButton1 = new javax.swing.JButton();

        setBackground(new java.awt.Color(18, 140, 175));
        setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        cubee.setFont(new java.awt.Font("Garamond", 1, 18)); // NOI18N
        cubee.setForeground(new java.awt.Color(235, 235, 235));
        cubee.setText("Pirámide 3 Lados");
        cubee.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                cubeeActionPerformed(evt);
            }
        });
        add(cubee, new org.netbeans.lib.awtextra.AbsoluteConstraints(110, 150, -1, -1));

        pyramidd.setFont(new java.awt.Font("Garamond", 1, 18)); // NOI18N
        pyramidd.setForeground(new java.awt.Color(235, 235, 235));
        pyramidd.setText("Paralelepipedo");
        pyramidd.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                pyramiddActionPerformed(evt);
            }
        });
        add(pyramidd, new org.netbeans.lib.awtextra.AbsoluteConstraints(110, 230, -1, -1));

        prismm.setFont(new java.awt.Font("Garamond", 1, 18)); // NOI18N
        prismm.setForeground(new java.awt.Color(235, 235, 235));
        prismm.setText("Cubo");
        prismm.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                prismmActionPerformed(evt);
            }
        });
        add(prismm, new org.netbeans.lib.awtextra.AbsoluteConstraints(110, 190, -1, -1));

        enviar.setFont(new java.awt.Font("Garamond", 1, 18)); // NOI18N
        enviar.setText("Enviar");
        enviar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                enviarActionPerformed(evt);
            }
        });
        add(enviar, new org.netbeans.lib.awtextra.AbsoluteConstraints(970, 340, -1, -1));

        shapes.setFont(new java.awt.Font("Garamond", 1, 18)); // NOI18N
        shapes.setForeground(new java.awt.Color(235, 235, 235));
        shapes.setText("Figuras Tridimensionales");
        shapes.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                shapesActionPerformed(evt);
            }
        });
        add(shapes, new org.netbeans.lib.awtextra.AbsoluteConstraints(340, 50, -1, -1));

        lcdask.setFont(new java.awt.Font("Garamond", 1, 18)); // NOI18N
        lcdask.setForeground(new java.awt.Color(235, 235, 235));
        lcdask.setText("Preguntas en LCD");
        lcdask.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                lcdaskMouseClicked(evt);
            }
        });
        lcdask.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                lcdaskActionPerformed(evt);
            }
        });
        add(lcdask, new org.netbeans.lib.awtextra.AbsoluteConstraints(880, 60, -1, -1));

        combo.setFont(new java.awt.Font("Garamond", 1, 18)); // NOI18N
        combo.setForeground(new java.awt.Color(235, 235, 235));
        combo.setModel(new javax.swing.DefaultComboBoxModel<>(new String[] { "Razones Geometricas", "El tanto por ciento", "Regla de tres compuesta", "Interes simple", "Figuras tridimensionales", "Expresion algebraica", "Grado de un término", "Suma y resta algebraica", "Multiplicación algebraica", "División algebraica", " " }));
        combo.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                comboActionPerformed(evt);
            }
        });
        add(combo, new org.netbeans.lib.awtextra.AbsoluteConstraints(870, 130, -1, -1));

        check1.setFont(new java.awt.Font("Garamond", 1, 18)); // NOI18N
        check1.setForeground(new java.awt.Color(235, 235, 235));
        check1.setText("Relacion que hay entre 2 cantidades del mismo tipo?");
        check1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                check1ActionPerformed(evt);
            }
        });
        add(check1, new org.netbeans.lib.awtextra.AbsoluteConstraints(870, 190, -1, -1));

        check2.setFont(new java.awt.Font("Garamond", 1, 18)); // NOI18N
        check2.setForeground(new java.awt.Color(235, 235, 235));
        check2.setText("Al primer termino dela razon se le llama?");
        check2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                check2ActionPerformed(evt);
            }
        });
        add(check2, new org.netbeans.lib.awtextra.AbsoluteConstraints(870, 230, -1, -1));

        opciones.setFont(new java.awt.Font("Palatino Linotype", 1, 14)); // NOI18N
        opciones.setForeground(new java.awt.Color(235, 235, 235));
        add(opciones, new org.netbeans.lib.awtextra.AbsoluteConstraints(1220, 190, 150, 30));

        respuesta.setFont(new java.awt.Font("Palatino Linotype", 1, 18)); // NOI18N
        respuesta.setForeground(new java.awt.Color(235, 235, 235));
        add(respuesta, new org.netbeans.lib.awtextra.AbsoluteConstraints(1350, 190, 60, 30));

        opciones2.setFont(new java.awt.Font("Garamond", 1, 18)); // NOI18N
        opciones2.setForeground(new java.awt.Color(235, 235, 235));
        add(opciones2, new org.netbeans.lib.awtextra.AbsoluteConstraints(1150, 230, 160, 30));

        respuesta2.setFont(new java.awt.Font("Palatino Linotype", 1, 14)); // NOI18N
        respuesta2.setForeground(new java.awt.Color(235, 235, 235));
        add(respuesta2, new org.netbeans.lib.awtextra.AbsoluteConstraints(1330, 230, 80, 40));

        piramid3.setFont(new java.awt.Font("Garamond", 1, 18)); // NOI18N
        piramid3.setForeground(new java.awt.Color(235, 235, 235));
        piramid3.setText("Piramide 4 Lados");
        piramid3.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                piramid3ActionPerformed(evt);
            }
        });
        add(piramid3, new org.netbeans.lib.awtextra.AbsoluteConstraints(110, 280, -1, -1));

        paralele.setFont(new java.awt.Font("Garamond", 1, 18)); // NOI18N
        paralele.setForeground(new java.awt.Color(235, 235, 235));
        paralele.setText("Cilindro");
        paralele.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                paraleleActionPerformed(evt);
            }
        });
        add(paralele, new org.netbeans.lib.awtextra.AbsoluteConstraints(110, 330, -1, -1));

        cilindro.setFont(new java.awt.Font("Garamond", 1, 18)); // NOI18N
        cilindro.setForeground(new java.awt.Color(235, 235, 235));
        cilindro.setText("Prisma");
        cilindro.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                cilindroActionPerformed(evt);
            }
        });
        add(cilindro, new org.netbeans.lib.awtextra.AbsoluteConstraints(110, 380, -1, -1));

        jButton1.setFont(new java.awt.Font("Garamond", 1, 18)); // NOI18N
        jButton1.setText("Principal");
        jButton1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton1ActionPerformed(evt);
            }
        });
        add(jButton1, new org.netbeans.lib.awtextra.AbsoluteConstraints(1460, 30, -1, -1));
    }// </editor-fold>//GEN-END:initComponents

    private void cubeeActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_cubeeActionPerformed
if(cubee.isSelected()){ 
     try {
            arduinos.sendData("c");
        } catch (Exception e) {
                        Logger.getLogger(arduino.class.getName()).log(Level.SEVERE,null,e);
                        
        }
}
       
        prismm.setSelected(false);
        pyramidd.setSelected(false);
        piramid3.setSelected(false);
        cilindro.setSelected(false);
        paralele.setSelected(false);
        
    
       
    }//GEN-LAST:event_cubeeActionPerformed

    private void pyramiddActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_pyramiddActionPerformed
     try {
            arduinos.sendData("p");
        } catch (Exception e) {
                        Logger.getLogger(arduino.class.getName()).log(Level.SEVERE,null,e);

        }
        prismm.setSelected(false);
        cubee.setSelected(false);
        piramid3.setSelected(false);
        cilindro.setSelected(false);
        paralele.setSelected(false);
    }//GEN-LAST:event_pyramiddActionPerformed

    private void prismmActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_prismmActionPerformed
      try {
            arduinos.sendData("8");
        } catch (Exception e) {
                        Logger.getLogger(arduino.class.getName()).log(Level.SEVERE,null,e);

        }
      cubee.setSelected(false);
        pyramidd.setSelected(false);
        piramid3.setSelected(false);
        cilindro.setSelected(false);
        paralele.setSelected(false);
    }//GEN-LAST:event_prismmActionPerformed

    private void enviarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_enviarActionPerformed
        if(check1.isSelected()){
        try {
            arduinos.sendData(check1.getText()+";"+opciones.getText()+";"+respuesta.getText());
        } catch (Exception e) {
             Logger.getLogger(arduino.class.getName()).log(Level.SEVERE,null,e);
        }}
        else if(check2.isSelected()){
        try {
            arduinos.sendData(check2.getText()+";"+opciones2.getText()+";"+respuesta2.getText());
        } catch (Exception e) {
             Logger.getLogger(arduino.class.getName()).log(Level.SEVERE,null,e);
        }    
        }
    }//GEN-LAST:event_enviarActionPerformed

    private void lcdaskActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_lcdaskActionPerformed
        
      combo.setVisible(true);  
      cubee.setVisible(false);
      prismm.setVisible(false);
      pyramidd.setVisible(false);
      shapes.setSelected(false);
      piramid3.setVisible(false);
      paralele.setVisible(false);
      cilindro.setVisible(false);
       
    }//GEN-LAST:event_lcdaskActionPerformed

    private void shapesActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_shapesActionPerformed
        
        cubee.setVisible(true);
      prismm.setVisible(true);
      pyramidd.setVisible(true);
      enviar.setVisible(false);
      lcdask.setSelected(false);
      piramid3.setVisible(true);
      cilindro.setVisible(true);
      paralele.setVisible(true);
      combo.setVisible(false);
       
    }//GEN-LAST:event_shapesActionPerformed

    private void comboActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_comboActionPerformed
    if(combo.getSelectedIndex()==0){
        check1.setVisible(true);
        check2.setVisible(true);
        enviar.setVisible(true);
        check1.setText("Relacion que hay entre 2 cantidades del mismo tipo?");
        opciones.setText("A.Razon B.Proporcion");
        respuesta.setText("a");
        check2.setText("Al primer termino dela razon se le llama?");
        opciones2.setText("A.Antec. B.Preced.");
        respuesta2.setText("a");
    }
    else if(combo.getSelectedIndex()==1){
        check1.setVisible(true);
        check2.setVisible(true);
        enviar.setVisible(true);
        check1.setText("El porcentaje se usa para?");
        opciones.setText("A.Suma B.Comparar Fracciones");
        respuesta.setText("b");
        check2.setText("Lugar de Origen?");
        opciones2.setText("A.Egipto B.Italia");
        respuesta2.setText("b");
    }
    else if(combo.getSelectedIndex()==2){
        check1.setVisible(true);
        check2.setVisible(true);
        enviar.setVisible(true);
        check1.setText("Caso incorrecto?");
        opciones.setText("A.Inversa B.Doble");
        respuesta.setText("b");
        check2.setText("");
        opciones2.setText("");
        respuesta2.setText("");
    }
    else if(combo.getSelectedIndex()==3){
        check1.setVisible(true);
        check2.setVisible(true);
        enviar.setVisible(true);
        check1.setText("Form. Interes Simple");
        opciones.setText("A.I=(CRT)/N         B.I=(CR)/TN");
        respuesta.setText("a");
        check2.setText("No confundir tiempo con");
        opciones2.setText("A.Tiempo B.Tasa de Interes");
        respuesta2.setText("a");
    }
    else if(combo.getSelectedIndex()==4){
        check1.setVisible(true);
        check2.setVisible(true);
        enviar.setVisible(true);
        check1.setText("");
        opciones.setText("");
        respuesta.setText("");
        check2.setText("");
        opciones2.setText("");
        respuesta2.setText("");
    }
    else if(combo.getSelectedIndex()==5){
        check1.setVisible(true);
        check2.setVisible(true);
        enviar.setVisible(true);
        check1.setText("");
        opciones.setText("");
        respuesta.setText("");
        check2.setText("");
        opciones2.setText("");
        respuesta2.setText("");
    }
    else if(combo.getSelectedIndex()==6){
        check1.setVisible(true);
        check2.setVisible(true);
        enviar.setVisible(true);
        check1.setText("");
        opciones.setText("");
        respuesta.setText("");
        check2.setText("");
        opciones2.setText("");
        respuesta2.setText("");
    }
    else if(combo.getSelectedIndex()==7){
        check1.setVisible(true);
        check2.setVisible(true);
        enviar.setVisible(true);
        check1.setText("");
        opciones.setText("");
        respuesta.setText("");
        check2.setText("");
        opciones2.setText("");
        respuesta2.setText("");
    }
    else if(combo.getSelectedIndex()==8){
        check1.setVisible(true);
        check2.setVisible(true);
        enviar.setVisible(true);
        check1.setText("");
        opciones.setText("");
        respuesta.setText("");
        check2.setText("");
        opciones2.setText("");
        respuesta2.setText("");
    }
    else if(combo.getSelectedIndex()==9){
        check1.setVisible(true);
        check2.setVisible(true);
        enviar.setVisible(true);
        check1.setText("");
        opciones.setText("");
        respuesta.setText("");
        check2.setText("");
        opciones2.setText("");
        respuesta2.setText("");
    }
    
    }//GEN-LAST:event_comboActionPerformed

    private void check1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_check1ActionPerformed
       check2.setSelected(false);
       respuesta.setVisible(true);
    }//GEN-LAST:event_check1ActionPerformed

    private void check2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_check2ActionPerformed
        check1.setSelected(false);
        respuesta2.setVisible(true);
    }//GEN-LAST:event_check2ActionPerformed

    private void lcdaskMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_lcdaskMouseClicked
      
    }//GEN-LAST:event_lcdaskMouseClicked

    private void piramid3ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_piramid3ActionPerformed
      try {
            arduinos.sendData("3");
        } catch (Exception e) {
                        Logger.getLogger(arduino.class.getName()).log(Level.SEVERE,null,e);

        }
        
        prismm.setSelected(false);
        cubee.setSelected(false);
        pyramidd.setSelected(false);
        cilindro.setSelected(false);
        paralele.setSelected(false);
    }//GEN-LAST:event_piramid3ActionPerformed

    private void paraleleActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_paraleleActionPerformed
       try {
            arduinos.sendData("4");
        } catch (Exception e) {
                        Logger.getLogger(arduino.class.getName()).log(Level.SEVERE,null,e);

        }
        prismm.setSelected(false);
        cubee.setSelected(false);
        piramid3.setSelected(false);
        cilindro.setSelected(false);
        pyramidd.setSelected(false);
    }//GEN-LAST:event_paraleleActionPerformed

    private void cilindroActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_cilindroActionPerformed
      try {
            arduinos.sendData("Q");
        } catch (Exception e) {
                        Logger.getLogger(arduino.class.getName()).log(Level.SEVERE,null,e);

        }
        prismm.setSelected(false);
        cubee.setSelected(false);
        piramid3.setSelected(false);
        paralele.setSelected(false);
        pyramidd.setSelected(false);
    }//GEN-LAST:event_cilindroActionPerformed

    private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton1ActionPerformed
    
    }//GEN-LAST:event_jButton1ActionPerformed


    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JCheckBox check1;
    private javax.swing.JCheckBox check2;
    private javax.swing.JRadioButton cilindro;
    private javax.swing.JComboBox<String> combo;
    private javax.swing.JRadioButton cubee;
    private javax.swing.JButton enviar;
    private javax.swing.JButton jButton1;
    private javax.swing.JRadioButton lcdask;
    private javax.swing.JLabel opciones;
    private javax.swing.JLabel opciones2;
    private javax.swing.JRadioButton paralele;
    private javax.swing.JRadioButton piramid3;
    private javax.swing.JRadioButton prismm;
    private javax.swing.JRadioButton pyramidd;
    private javax.swing.JLabel respuesta;
    private javax.swing.JLabel respuesta2;
    private javax.swing.JRadioButton shapes;
    // End of variables declaration//GEN-END:variables
}
