package mensuracao5;

public class Pessoa {
    String nome;
    Data dataNasc;
    Endereco endereco;
    Contato contato;

    public Pessoa(String nome, int dia, int mes,int ano,
     String logradouro, String bairro, String cidade, String estado, String cep, int numero,
     String telefoneResid, String celular, String email) {

        this.nome = nome;
        dataNasc = new Data(dia, mes, ano);
        endereco = new Endereco(logradouro, bairro, cidade, estado, cep, numero);
        contato = new Contato(telefoneResid, celular, email);
    }

    public Pessoa(String nome, Data dataNasc, Endereco endereco, Contato contato){
        this.nome = nome;
        this.dataNasc = dataNasc;
        this.endereco = endereco;
        this.contato = contato;
    }
    
    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }

    public Data getDataNasc() {
        return dataNasc;
    }
    public void setDataNasc(Data dataNasc) {
        this.dataNasc = dataNasc;
    }

    public Endereco getEndereco() {
        return endereco;
    }
    public void setEndereco(Endereco endereco) {
        this.endereco = endereco;
    }

    public Contato getContato() {
        return contato;
    }
    public void setContato(Contato contato) {
        this.contato = contato;
    }
}
