package mensuracao4;

public class Conta {
    float dinheiro;

    public Conta(){

    }
    public Conta(float dinheiro) {
        this.dinheiro = dinheiro;
    }

    public void Sacar(float num){
        dinheiro = dinheiro - num;
    }

    public void Depositar(float num){
        dinheiro = dinheiro + num;
    }

    public float getDinheiro() {
        return dinheiro;
    }

    public void setDinheiro(float dinheiro) {
        this.dinheiro = dinheiro;
    }

    @Override
    public String toString() {
        return "Conta [dinheiro=" + dinheiro + "]";
    }
}
