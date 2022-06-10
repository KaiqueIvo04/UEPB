package mensuracao6;

public class ChefeDepartamento extends Funcionario{
    protected String departamento, dataPromocao;
    protected double gratificacao;

    public ChefeDepartamento(){

    }
    public ChefeDepartamento(String departamento, String dataPromocao, double gratificacao) {
        this.departamento = departamento;
        this.dataPromocao = dataPromocao;
        this.gratificacao = gratificacao;
    }
    public ChefeDepartamento(String matricula, String dataAdmissao, double salario, String departamento,
            String dataPromocao, double gratificacao) {
        super(matricula, dataAdmissao, salario);
        this.departamento = departamento;
        this.dataPromocao = dataPromocao;
        this.gratificacao = gratificacao;
    }
    public ChefeDepartamento(String nome, String cpf, String dataNasc, String matricula, String dataAdmissao,
            double salario, String departamento, String dataPromocao, double gratificacao) {
        super(nome, cpf, dataNasc, matricula, dataAdmissao, salario);
        this.departamento = departamento;
        this.dataPromocao = dataPromocao;
        this.gratificacao = gratificacao;
    }
    public String getDepartamento() {
        return departamento;
    }
    public void setDepartamento(String departamento) {
        this.departamento = departamento;
    }
    public String getDataPromocao() {
        return dataPromocao;
    }
    public void setDataPromocao(String dataPromocao) {
        this.dataPromocao = dataPromocao;
    }
    public double getGratificacao() {
        return gratificacao;
    }
    public void setGratificacao(double gratificacao) {
        this.gratificacao = gratificacao;
    }
    public void mostraChefe(){
        System.out.println(getDepartamento() +" "+ getDataPromocao() +" "+ getGratificacao()
        +" "+ getMatricula() +" "+ getDataAdmissao() +" "+ getSalario() +" "+ getNome()
        +" "+ getCpf() +" "+ getDataNasc());
    }
}
