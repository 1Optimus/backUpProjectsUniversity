package zoologico;


public class Animal {
    private String Tipo_Alimentacion,habitat,Nombre;
    private int Cantidad,Edad,Horario;
    
    public Animal(String Tipo_Alimentacion,String habitat,String Nombre,int Cantidad,int Edad){
        this.Tipo_Alimentacion=Tipo_Alimentacion;
        this.habitat=habitat;
        this.Nombre=Nombre;
        this.Cantidad=Cantidad;
        this.Edad=Edad;
    }
    public String getNombre(){
        return Nombre;
    }
    public void setTipo(String Nombre){
        this.Nombre=Nombre;
    }
    public String getHabitat(){
        return habitat;
    }
    public void setHabitat(String habitat){
        this.habitat=habitat;
    }
    public String getTipo_Alimentacion(){
        return Tipo_Alimentacion;
    }
    public void setTipo_Alimentacion(String Tipo_Alimentacion){
        this.Tipo_Alimentacion=Tipo_Alimentacion;
    }
    public int getHorario(){
        return Horario;
    }
    public void setHorario(int Horario){
        this.Horario=Horario;
    }
    public int getCantidadA(){
        return Cantidad;
    }
    public void setCantidadA(int Cantidad){
        this.Cantidad=Cantidad;
    }
    
    public int getEdad(){
        return Edad;
    }
    public void setEdad(int Edad){
        this.Edad=Edad;
    }
    
    
}
