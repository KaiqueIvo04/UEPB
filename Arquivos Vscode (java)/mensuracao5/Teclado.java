package mensuracao5;

public class Teclado {
    String marca;
    String modelo;
    boolean mecanico;

    public Teclado(String marca, String modelo, boolean mecanico) {
        this.marca = marca;
        this.modelo = modelo;
        this.mecanico = mecanico;
    }

    public String getMarca() {
        return marca;
    }
    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModelo() {
        return modelo;
    }
    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public boolean isMecanico() {
        return mecanico;
    }
    public void setMecanico(boolean mecanico) {
        this.mecanico = mecanico;
    }

}
