package mensuracao6.Questão6;

public class Pessoa extends CadastroPessoa{
    protected String nome;
    protected String cpf;

    public void mostraDados(){
        System.out.printf("Nome: %s CPF: %s\n", nome, cpf);
    }

    public Pessoa() {
    }
    public Pessoa(String nome) {
        this.nome = nome;
    }
    public Pessoa(String nome, String cpf) {
        this.nome = nome;
        this.cpf = cpf;
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
}
