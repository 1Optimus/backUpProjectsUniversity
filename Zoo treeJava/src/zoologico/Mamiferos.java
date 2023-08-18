package zoologico;


public class Mamiferos extends Animal {
    String Longevidad;
    int Patas;
    public Mamiferos(String Tipo_Alimentacion, String habitat, String Nombre, int Cantidad, int Edad) {
        super(Tipo_Alimentacion, habitat, Nombre, Cantidad, Edad);
    }
     public void mostrar(){
        System.out.println("    DATOS DE LOS MAMIFEROS\nNombre: "+getNombre()+"\nTipo de Alimentacion: "+getTipo_Alimentacion()
                +"\nCantidad de Animales: "+getCantidadA()+"\nHabitat: "+getHabitat()+"\nEdad: "+getEdad()+"\nHorario: "+getHorario()
        );
    }
}
