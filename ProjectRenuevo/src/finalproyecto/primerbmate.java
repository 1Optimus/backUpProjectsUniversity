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
public class primerbmate extends javax.swing.JPanel {

    /**
     * Creates new form primerbmate
     */
    public primerbmate() {
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

        jLabel1 = new javax.swing.JLabel();
        jCheckBox1 = new javax.swing.JCheckBox();
        jPanel1 = new javax.swing.JPanel();
        jLabel2 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        jLabel6 = new javax.swing.JLabel();
        jLabel7 = new javax.swing.JLabel();
        jButton2 = new javax.swing.JButton();
        jLabel5 = new javax.swing.JLabel();
        jLabel8 = new javax.swing.JLabel();
        jLabel9 = new javax.swing.JLabel();
        jLabel11 = new javax.swing.JLabel();

        jLabel1.setText("jLabel1");

        jCheckBox1.setText("jCheckBox1");

        setBackground(new java.awt.Color(51, 204, 255));
        setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jPanel1.setBackground(new java.awt.Color(153, 230, 225));

        jLabel2.setFont(new java.awt.Font("Palatino Linotype", 3, 24)); // NOI18N
        jLabel2.setText("Figuras Tridimensionales");

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addComponent(jLabel2, javax.swing.GroupLayout.PREFERRED_SIZE, 889, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 831, Short.MAX_VALUE))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jLabel2, javax.swing.GroupLayout.DEFAULT_SIZE, 42, Short.MAX_VALUE)
        );

        add(jPanel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, 1720, -1));

        jLabel4.setFont(new java.awt.Font("Palatino Linotype", 0, 18)); // NOI18N
        jLabel4.setText("<html>Recuerda usted el triangulo, el cuadrado y  el rectángulo, pues bien esas son figuras bidimensionales, se llaman así<p>porque únicamente tienen dos dimensiones alto y largo, también son llamadas figuras planas porque únicamente<p>pueden representarse en un plano como una hoja de papel o bien una pared.<p><p>Las figuras tridimensionales son figuras que poseen tres dimensiones: alto, largo y ancho, también son conocidas<p>como figuras solidas pues aparte de poder representarse en un plano también pueden elaborarse con materiales<p>como cartón y pueden manipularse.  La mayoría de objetos que nos rodean son tridimensionales, pues<p>podemos manipularlos.<html>");
        jLabel4.setVerticalAlignment(javax.swing.SwingConstants.TOP);
        add(jLabel4, new org.netbeans.lib.awtextra.AbsoluteConstraints(130, 40, 920, 220));

        jLabel3.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Imagenes/phone.png"))); // NOI18N
        add(jLabel3, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 80, 120, 150));

        jLabel6.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Imagenes/pyramids.png"))); // NOI18N
        add(jLabel6, new org.netbeans.lib.awtextra.AbsoluteConstraints(30, 340, 70, 80));

        jLabel7.setFont(new java.awt.Font("Palatino Linotype", 0, 18)); // NOI18N
        jLabel7.setText("<html>Muchas de estas figuras las podemos apreciar en las construcciones de edificios que nos rodean, como las casas<p>los centros comerciales, los automóviles, los recipientes como ollas y frascos entre otros. Entre las figuras<p>tridimensionales más conocidas están las pirámides las cuales son muy famosas en Egipto pues era la<p>forma más utilizada por los antiguos egipcios para construir sus templos. <html>");
        jLabel7.setVerticalAlignment(javax.swing.SwingConstants.TOP);
        add(jLabel7, new org.netbeans.lib.awtextra.AbsoluteConstraints(130, 280, 970, 120));

        jButton2.setText("Volumenes");
        jButton2.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton2ActionPerformed(evt);
            }
        });
        add(jButton2, new org.netbeans.lib.awtextra.AbsoluteConstraints(1430, 800, -1, -1));

        jLabel5.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Imagenes/icons8-virtualbox-256.png"))); // NOI18N
        add(jLabel5, new org.netbeans.lib.awtextra.AbsoluteConstraints(1080, 150, -1, -1));

        jLabel8.setText("jLabel8");
        add(jLabel8, new org.netbeans.lib.awtextra.AbsoluteConstraints(270, 410, -1, -1));

        jLabel9.setFont(new java.awt.Font("Palatino Linotype", 0, 18)); // NOI18N
        jLabel9.setText("<html>Veamos el siguiente ejemplo:<p>a) Calcule el volumen de un prisma triangular que tiene 54 mm2 de área en su base y de ancho 15 mm. <html>");
        jLabel9.setVerticalAlignment(javax.swing.SwingConstants.TOP);
        add(jLabel9, new org.netbeans.lib.awtextra.AbsoluteConstraints(120, 460, 850, 50));

        jLabel11.setIcon(new javax.swing.ImageIcon(getClass().getResource("/Imagenes/area.png"))); // NOI18N
        add(jLabel11, new org.netbeans.lib.awtextra.AbsoluteConstraints(230, 540, -1, -1));
    }// </editor-fold>//GEN-END:initComponents

    private void jButton2ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton2ActionPerformed
        volumenes p=new volumenes();
        p.setSize(1643, 990);
        p.setLocation(15,0);
        Principalpanel.removeAll();
        Principalpanel.add(p,BorderLayout.CENTER);
        Principalpanel.revalidate();
        Principalpanel.repaint();
        
    }//GEN-LAST:event_jButton2ActionPerformed

    
    public static void main(String []args){
        new primerbmate().setVisible(true);
        
            
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton jButton2;
    private javax.swing.JCheckBox jCheckBox1;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel11;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JLabel jLabel9;
    private javax.swing.JPanel jPanel1;
    // End of variables declaration//GEN-END:variables
}
