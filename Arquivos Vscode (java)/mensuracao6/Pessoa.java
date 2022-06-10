package mensuracao6;

public class Pessoa {
    protected String nome, cpf, dataNasc;

    public Pessoa(){
    }
    public Pessoa(String nome, String cpf, String dataNasc) {
        this.nome = nome;
        this.cpf = cpf;
        this.dataNasc = dataNasc;
    }
    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }
    public String getCpf() {
        return cpf;
    }
    public void setCpf(String cpf) {
        this.cpf = cpf;
    }
    public String getDataNasc() {
        return dataNasc;
    }
    public void setDataNasc(String dataNasc) {
        this.dataNasc = dataNasc;
    }
    public void mostrarPessoa(){
        System.out.println(getNome()+" " + getCpf() + " " + getDataNasc());
    }
}
