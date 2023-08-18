/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package finalproyecto;

import static finalproyecto.Mathe.Principalpanel;
import java.awt.BorderLayout;

/**
 *
 * @author Sergio Orozco
 */
public class Tantoporciento extends javax.swing.JPanel {

    /**
     * Creates new form Tantoporciento
     */
    public Tantoporciento() {
        initComponents();
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        jButton2 = new javax.swing.JButton();
        jLabel7 = new javax.swing.JLabel();

        setBackground(new java.awt.Color(51, 204, 255));
        setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jPanel1.setBackground(new java.awt.Color(153, 230, 225));

        jLabel1.setFont(new java.awt.Font("Palatino Linotype", 3, 24)); // NOI18N
        jLabel1.setText("El tanto por ciento");

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 996, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 644, Short.MAX_VALUE))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jLabel1, javax.swing.GroupLayout.DEFAULT_SIZE, 44, Short.MAX_VALUE)
        );

        add(jPanel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 1640, -1));

        jLabel2.setFont(new java.awt.Font("Palatino Linotype", 0, 18)); // NOI18N
        jLabel2.setText("<html>Muchas veces necesitamos conocer a cuanto corresponde un porcentaje sobre una cantidad dada, por ejemplo en algunos comerciales ofrecen un 5% de<p>descuento en la compra de determinados artículos, y necesitamos saber cómo determinar cuál es la cantidad correcta de dinero que nos van a descontar<p>del precio original. Para ello utilizamos una regla de tres simple directa.<p><p>Para este proceso es importante tener presente lo siguiente: para plantear nuestra regla de tres la cantidad total a la que se le debe encontrar o sacar<p>un porcentaje determinado siempre será nuestro 100%<html>");
        jLabel2.setHorizontalTextPosition(javax.swing.SwingConstants.LEFT);
        jLabel2.setVerticalTextPosition(javax.swing.SwingConstants.TOP);
        add(jLabel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 40, 1310, 230));

        jLabel3.setFont(new java.awt.Font("Palatino Linotype", 0, 18)); // NOI18N
        jLabel3.setText("<html>Esto significa que:<p><p>        si me piden sacar el 10% de 980, mi 100% es 980 <p>            si me piden sacar el 56% de 14000 mi 100% es 14000<p>          si me piden el 2% de 457 mi 100% es 457<p><p>Esta regla se aplica a cualquier cantidad a que se le debe sacar cualquier porcentaje.<html>");
        jLabel3.setVerticalAlignment(javax.swing.SwingConstants.TOP);
        add(jLabel3, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 290, 1100, 190));

        jLabel4.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Imagenes/investment (1).png"))); // NOI18N
        add(jLabel4, new org.netbeans.lib.awtextra.AbsoluteConstraints(970, 350, 140, 150));

        jButton2.setBackground(new java.awt.Color(51, 204, 255));
        jButton2.setFont(new java.awt.Font("Palatino Linotype", 1, 14)); // NOI18N
        jButton2.setText("Más Ejemplos");
        jButton2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton2ActionPerformed(evt);
            }
        });
        add(jButton2, new org.netbeans.lib.awtextra.AbsoluteConstraints(1350, 910, -1, -1));

        jLabel7.setFont(new java.awt.Font("Palatino Linotype", 0, 18)); // NOI18N
        jLabel7.setText("<html>Veamos un ejemplo: Encontrar el 20% de 400.<p>100% _______________400<p>20% _______________ x<p>Luego del planteamiento aplicamos el procedimiento para encontrar la solución de una regla de tres simple directa que ya conocemos<p>(20 x 400)/100 = 8000/100= 80 <p>La respuesta es el 20% de 400 es 80 <html>");
        jLabel7.setVerticalAlignment(javax.swing.SwingConstants.TOP);
        add(jLabel7, new org.netbeans.lib.awtextra.AbsoluteConstraints(10, 550, 1110, 180));
    }// </editor-fold>//GEN-END:initComponents

    private void jButton2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton2ActionPerformed
       tantoporcientoejemplo p=new tantoporcientoejemplo();
        p.setSize(1643, 990);
        p.setLocation(15,0);
        Principalpanel.removeAll();
        Principalpanel.add(p,BorderLayout.CENTER);
        Principalpanel.revalidate();
        Principalpanel.repaint();
        
    }//GEN-LAST:event_jButton2ActionPerformed


    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton jButton2;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JPanel jPanel1;
    // End of variables declaration//GEN-END:variables
}
