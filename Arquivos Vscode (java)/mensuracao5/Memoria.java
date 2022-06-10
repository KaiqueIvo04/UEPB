package mensuracao5;

public class Memoria {
    String marcaMemoria;
    int tamanho;
    String tecnologia;
    
    public Memoria(String marcaMemoria, int tamanho, String tecnologia) {
        this.marcaMemoria = marcaMemoria;
        this.tamanho = tamanho;
        this.tecnologia = tecnologia;
    }

    public String getMarcaMemoria() {
        return marcaMemoria;
    }
    public void setMarcaMemoria(String marcaMemoria) {
        this.marcaMemoria = marcaMemoria;
    }

    public int getTamanho() {
        return tamanho;
    }
    public void setTamanho(int tamanho) {
        this.tamanho = tamanho;
    }

    public String getTecnologia() {
        return tecnologia;
    }
    public void setTecnologia(String tecnologia) {
        this.tecnologia = tecnologia;
    }

}
