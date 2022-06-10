package mensuracao5;

public class Monitor {
    String marcaMonitor;
    int frequencia;
    int polegada;

    public Monitor(String marcaMonitor, int frequencia, int polegada) {
        this.marcaMonitor = marcaMonitor;
        this.frequencia = frequencia;
        this.polegada = polegada;
    }

    public String getMarcaMonitor() {
        return marcaMonitor;
    }
    public void setMarcaMonitor(String marcaMonitor) {
        this.marcaMonitor = marcaMonitor;
    }

    public int getFrequencia() {
        return frequencia;
    }
    public void setFrequencia(int frequencia) {
        this.frequencia = frequencia;
    }

    public int getPolegada() {
        return polegada;
    }
    public void setPolegada(int polegada) {
        this.polegada = polegada;
    }

}
