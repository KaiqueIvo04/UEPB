package mensuracao5;

public class Monstro {
    Cabeça cabeca;
    Olho olho;
    Boca boca;
    Braco braco;
    Perna perna;
    
    public Monstro(String cabeca, String olho, String boca, String braco, String perna){
        this.cabeca = new Cabeça(cabeca);
        this.olho = new Olho(olho);
        this.boca = new Boca(boca);
        this.braco = new Braco(braco);
        this.perna = new Perna(perna);
    }
    public Monstro(Cabeça cabeca, Olho olho, Boca boca, Braco braco, Perna perna) {
        this.cabeca = cabeca;
        this.olho = olho;
        this.boca = boca;
        this.braco = braco;
        this.perna = perna;
    }

    public Cabeça getCabeca() {
        return cabeca;
    }

    public void setCabeca(Cabeça cabeca) {
        this.cabeca = cabeca;
    }

    public Olho getOlho() {
        return olho;
    }

    public void setOlho(Olho olho) {
        this.olho = olho;
    }

    public Boca getBoca() {
        return boca;
    }

    public void setBoca(Boca boca) {
        this.boca = boca;
    }

    public Braco getBraco() {
        return braco;
    }

    public void setBraco(Braco braco) {
        this.braco = braco;
    }

    public Perna getPerna() {
        return perna;
    }

    public void setPerna(Perna perna) {
        this.perna = perna;
    }

}
