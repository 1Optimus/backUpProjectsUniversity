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
public class sumyresejemplo extends javax.swing.JPanel {

    /**
     * Creates new form sumyresejemplo
     */
    public sumyresejemplo() {
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
        jButton1 = new javax.swing.JButton();

        setBackground(new java.awt.Color(51, 204, 255));
        setLayout(new org.netbeans.lib.awtextra.AbsoluteLayout());

        jPanel1.setBackground(new java.awt.Color(153, 230, 225));

        jLabel1.setFont(new java.awt.Font("Palatino Linotype", 1, 24)); // NOI18N
        jLabel1.setText("Ejemplos de sumas y restas algebraicas");

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 668, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(0, 1052, Short.MAX_VALUE))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jLabel1, javax.swing.GroupLayout.DEFAULT_SIZE, 43, Short.MAX_VALUE)
        );

        add(jPanel1, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 0, -1, -1));

        jLabel2.setFont(new java.awt.Font("Palatino Linotype", 0, 16)); // NOI18N
        jLabel2.setText("<html>Ejemplo:<pre>                    3a + ( a + 7b - 4c ) - ( 3a + 5b - 3c) - ( b - c )</pre><p>En algunos casos, como en este ejemplo, todos o algunos de los términos que se deben operar se encuentran entre paréntesis, en este caso lo primero que se debe hacer es “sacar del paréntesis” los términos, aplicando la ley de signos “de multiplicación” entre el signo que antecede a cada paréntesis con todos y cada uno de los signos de los términos que están dentro de ellos.<p><p>En este caso y con el propósito de facilitar la comprensión iremos operando paulatinamente los términos de cada uno de los paréntesis.<pre>                    3a + ( a + 7b - 4c ) - ( 3a + 5b - 3c) - ( b - c )</pre><pre>                    3a +  a + 7b - 4c  - ( 3a + 5b - 3c) - ( b - c )</pre>En esta primera parte hemos aplicado la ley de signos de multiplicación y división entre el signo “más” (+) que estaba antes del paréntesis y cada uno de los signos de los términos que estaban dentro del paréntesis.<pre>                   3a +  a + 7b - 4c  - ( 3a + 5b - 3c) - ( b - c )</pre><pre>                   3a +  a + 7b - 4c  -  3a - 5b + 3c - ( b - c )</pre><p>En esta  parte hemos aplicado la ley de signos de multiplicación y división entre el signo “menos” (-) que estaba antes del paréntesis y cada uno de los signos de los términos que estaban dentro del paréntesis.<pre>                   3a +  a + 7b - 4c  -  3a - 5b + 3c - ( b - c )</pre><pre>                   3a +  a + 7b - 4c  -  3a - 5b + 3c -  b + c</pre><p><p>En esta  parte hemos aplicado la ley de signos de multiplicación y división entre el signo “menos” (-) que estaba antes del paréntesis y cada uno de los signos de los términos que estaban dentro del paréntesis.<p><p>La expresión queda de la siguiente manera:<pre>                   3a +  a + 7b - 4c  -  3a - 5b + 3c -  b + c</pre>Ahora procedemos a operar agrupando términos  semejantes entre sí:<pre>                    3a +  a -  3a</pre><pre>                    7b - 5b -  b</pre><pre>                 - 4c  + 3c + c</pre>Seguidamente se reducen los términos semejantes a uno solo tal como ya se estudió.<pre>                   3a +  a -  3a = a</pre><pre>                    7b - 5b -  b = b</pre><pre>                   - 4c  + 3c + c = </pre>Como se puede observar los términos semejantes que contenía la literal “c” se anulan, ya que al operarse entre sí el resultado es “cero”, y el cero en álgebra no se escribe como respuesta, antes bien se debe anular la expresión algebraica colocando una diagonal como en éste ejemplo. Finalmente se agrupan los resultados parciales obtenidos en cada operación y esa es nuestra respuesta final.<pre>a + b</pre><html>");
        jLabel2.setVerticalAlignment(javax.swing.SwingConstants.TOP);
        add(jLabel2, new org.netbeans.lib.awtextra.AbsoluteConstraints(0, 40, 1230, 950));

        jButton1.setText("Ejercicios");
        jButton1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                jButton1ActionPerformed(evt);
            }
        });
        add(jButton1, new org.netbeans.lib.awtextra.AbsoluteConstraints(1370, 910, -1, -1));
    }// </editor-fold>//GEN-END:initComponents

    private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_jButton1ActionPerformed
       sumyresejercicio p=new sumyresejercicio();
        p.setSize(1643, 990);
        p.setLocation(15,0);
        Principalpanel.removeAll();
        Principalpanel.add(p,BorderLayout.CENTER);
        Principalpanel.revalidate();
        Principalpanel.repaint();
        
    }//GEN-LAST:event_jButton1ActionPerformed


    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton jButton1;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JPanel jPanel1;
    // End of variables declaration//GEN-END:variables
}
