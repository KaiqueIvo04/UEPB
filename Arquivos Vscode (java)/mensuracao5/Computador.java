package mensuracao5;

public class Computador {
    Teclado teclado;
    Monitor monitor;
    Memoria memoria;
    PlacaMae placaMae;

    public Computador(String marca, String modelo, boolean mecanico, 
    String marcaMonitor, int frequencia, int polegada, 
    String marcaMemoria, int tamanho, String tecnologia, 
    String marcaPlaca, Memoria memoria, String processador){

        teclado = new Teclado(marca, modelo, mecanico);
        monitor = new Monitor(marcaMonitor, frequencia, polegada);
        memoria = new Memoria(marcaMemoria, tamanho, tecnologia);
        placaMae = new PlacaMae(marcaPlaca, memoria, processador);
    }
    
    public Computador(Teclado teclado, Monitor monitor, Memoria memoria, PlacaMae placaMae) {
        this.teclado = teclado;
        this.monitor = monitor;
        this.memoria = memoria;
        this.placaMae = placaMae;
    }

    public Teclado getTeclado() {
        return teclado;
    }
    public void setTeclado(Teclado teclado) {
        this.teclado = teclado;
    }

    public Monitor getMonitor() {
        return monitor;
    }
    public void setMonitor(Monitor monitor) {
        this.monitor = monitor;
    }

    public Memoria getMemoria() {
        return memoria;
    }
    public void setMemoria(Memoria memoria) {
        this.memoria = memoria;
    }

    public PlacaMae getPlacaMae() {
        return placaMae;
    }
    public void setPlacaMae(PlacaMae placaMae) {
        this.placaMae = placaMae;
    }

}
