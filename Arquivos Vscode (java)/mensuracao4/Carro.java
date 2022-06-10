package mensuracao4;

public class Carro {
    String marca;
    String modelo;
    String tipoCombustivel;
    int ano;
    
    public Carro(){
    }
    public Carro(String marca, String modelo, String tipoCombustivel, int ano) {
        this.marca = marca;
        this.modelo = modelo;
        this.tipoCombustivel = tipoCombustivel;
        this.ano = ano;
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

    public String getTipoCombustivel() {
        return tipoCombustivel;
    }

    public void setTipoCombustivel(String tipoCombustivel) {
        this.tipoCombustivel = tipoCombustivel;
    }

    public int getAno() {
        return ano;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    @Override
    public String toString() {
        return "Carro [ano=" + ano + ", marca=" + marca + ", modelo=" + modelo + ", tipoCombustivel=" + tipoCombustivel
                + "]";
    }
}
