package zoologico;
import java.util.Scanner;


public class Principal {
    public static void clearScreen() {  
    System.out.print("\033[H\033[2J");  
    System.out.flush();  
}  
     public static void main(String[]args){
         int especie = 0,cantidad=0,edad=0;
         String nombre,Alimento,Habitatt,horario;
         do{
         Scanner entrada=new Scanner(System.in);
         
         System.out.print("Ingrese Especia a la que pertenece: \n");
         System.out.println("1.- Mamiferos\n2.-Anfibios\n3.-Reptiles\n4.-Peces\n5.-Aves");
         especie=entrada.nextInt();
          
         switch(especie){
             case 1:
                     
                     System.out.print("Tipo de Mamifero?: \n");
                     nombre=entrada.next();
                     System.out.print("Tipo de Alimentacion: \n");
                     Alimento=entrada.next();
                     System.out.print("Habitat: \n");
                     Habitatt=entrada.next();
                     System.out.print("Cantidad: \n");
                     cantidad=entrada.nextInt();
                     System.out.print("Edad: \n");
                     edad=entrada.nextInt();
                      System.out.print("Horario: \n");
                     horario=entrada.next();
                     
                     Mamiferos mamifero=new Mamiferos(Alimento,Habitatt,nombre,cantidad,edad);
                     mamifero.mostrar();
                 break;
             case 2:
                 break;
             case 3:
                 break;
             case 4:
                 break;
             case 5:
                 break;
             default:
                 break;
         }        
                         
    }while(especie>0&&especie<7);
}
     
     
     
}