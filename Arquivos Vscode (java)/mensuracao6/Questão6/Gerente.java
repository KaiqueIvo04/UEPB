package mensuracao6.Questão6;

public class Gerente extends Funcionario{
    protected int area;

    public Gerente() {
    }

    public Gerente(String nome, String cpf, String matricula, double salario, int area) {
        super(nome, cpf, matricula, salario);
        this.area = area;
    }
    public Gerente(int area) {
        this.area = area;
    }
    public int getArea() {
        return area;
    }
    public void setArea(int area) {
        this.area = area;
    }
    @Override
    public void mostraDados(){
        System.out.printf("Nome: %s CPF: %s Matrícula: %s Salário: %.2f Área: %d", super.nome,
         super.cpf, super.matricula, super.salario, area);
    }

}
