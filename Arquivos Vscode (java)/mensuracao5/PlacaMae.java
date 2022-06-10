package mensuracao5;

public class PlacaMae {
    String marcaPlaca;
    Memoria memoria;
    String processador;
    
    public PlacaMae(String marcaPlaca, String marcaMemoria, int tamanho, String tecnologia, String processador) {
        this.marcaPlaca = marcaPlaca;
        memoria = new Memoria(marcaMemoria, tamanho, tecnologia);
        this.processador = processador;
    }
    public PlacaMae(String marcaPlaca, Memoria memoria, String processador) {
        this.marcaPlaca = marcaPlaca;
        this.memoria = memoria;
        this.processador = processador;
    }

    public String getMarcaPlaca() {
        return marcaPlaca;
    }
    public void setMarcaPlaca(String marcaPlaca) {
        this.marcaPlaca = marcaPlaca;
    }

    public Memoria getMemoria() {
        return memoria;
    }
    public void setMemoria(Memoria memoria) {
        this.memoria = memoria;
    }

    public String getProcessador() {
        return processador;
    }
    public void setProcessador(String processador) {
        this.processador = processador;
    }

}
