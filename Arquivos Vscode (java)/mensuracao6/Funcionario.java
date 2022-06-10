package mensuracao6;

public class Funcionario extends Pessoa{
    protected String matricula, dataAdmissao;
    protected double salario;

    public Funcionario(){
    }
    public Funcionario(String matricula, String dataAdmissao, double salario) {
        this.matricula = matricula;
        this.dataAdmissao = dataAdmissao;
        this.salario = salario;
    }
    public Funcionario(String nome, String cpf, String dataNasc, String matricula, String dataAdmissao,
            double salario) {
        super(nome, cpf, dataNasc);
        this.matricula = matricula;
        this.dataAdmissao = dataAdmissao;
        this.salario = salario;
    }
    public String getMatricula() {
        return matricula;
    }
    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }
    public String getDataAdmissao() {
        return dataAdmissao;
    }
    public void setDataAdmissao(String dataAdmissao) {
        this.dataAdmissao = dataAdmissao;
    }
    public double getSalario() {
        return salario;
    }
    public void setSalario(double salario) {
        this.salario = salario;
    }
    public void mostrarFuncionario(){
        System.out.println(getMatricula() +" "+ getDataAdmissao()+" "+ getSalario() +" "+ getNome()
        +" "+ getCpf() +" "+ getDataNasc());
    }
}
