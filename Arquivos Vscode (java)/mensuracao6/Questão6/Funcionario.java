package mensuracao6.Questão6;

public class Funcionario extends Pessoa{
    protected String matricula;
    protected double salario;

    public Funcionario() {
    }
    public Funcionario(String nome, String cpf, String matricula, double salario) {
        super(nome, cpf);
        this.matricula = matricula;
        this.salario = salario;
    }
    public Funcionario(String matricula, double salario) {
        this.matricula = matricula;
        this.salario = salario;
    }
    public String getMatricula() {
        return matricula;
    }
    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }
    public double getSalario() {
        return salario;
    }
    public void setSalario(double salario) {
        this.salario = salario;
    }
    @Override
    public void mostraDados(){
        System.out.printf("Nome: %s CPF: %s Matrícula: %s Salário: %.2f\n", super.nome,
         super.cpf, matricula, salario);
    }
}
