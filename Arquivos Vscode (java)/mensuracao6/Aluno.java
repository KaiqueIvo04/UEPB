package mensuracao6;

public class Aluno extends Pessoa{
    protected String matricula;

    public Aluno(){
    }
    public Aluno(String matricula) {
        this.matricula = matricula;
    }
    public Aluno(String nome, String cpf, String dataNasc, String matricula) {
        super(nome, cpf, dataNasc);
        this.matricula = matricula;
    }
    public String getMatricula() {
        return matricula;
    }
    public void setMatricula(String matricula) {
        this.matricula = matricula;
    }
    public void mostrarAluno(){
        System.out.println(getMatricula() +" "+ getNome() +" "+ getCpf() +" "+ getDataNasc());
    }
}
