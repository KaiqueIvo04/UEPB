package mensuracao6.Questão6;

import java.util.ArrayList;
import java.util.List;

public class CadastroPessoa{
    public List<Pessoa> pessoas = new ArrayList<Pessoa>();
    public int quantAtual = 0;
    
    public void cadastrarPessoa(Pessoa pessoa){
        pessoas.add(pessoa);
    }
    public void mostraCadastro(){
        for(Pessoa a:pessoas){
            a.mostraDados();
        }
    }
    public static void main(String[] args) {
        CadastroPessoa aplicacao = new CadastroPessoa();
        Pessoa pessoa = new Pessoa("kaique", "185538548");
        Pessoa cliente = new Cliente("gabriel", "6558166486", 001);
        Pessoa funcionario = new Funcionario("jamilson", "9612651878", "000989", 2000);
        Pessoa gerente = new Gerente("jucelio", "788451233", "0004", 4000, 1);
        aplicacao.cadastrarPessoa(pessoa);
        aplicacao.cadastrarPessoa(cliente);
        aplicacao.cadastrarPessoa(funcionario);
        aplicacao.cadastrarPessoa(gerente);
        aplicacao.mostraCadastro();
    }
}