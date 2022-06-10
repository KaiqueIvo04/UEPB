package mensuracao6;

public class TestaTudo {
    public static void main(String[] args) {
        Pessoa objeto1 = new Pessoa("kaique", "13660435457", "08-03-2004");
        Funcionario objeto2 = new Funcionario("kaique", "13660435457", "08-03-2004",
         "123456", "06-09-2007", 500.00);
        Aluno objeto3 = new Aluno("kaique", "13660435457", "08-03-2004","789456");
        ChefeDepartamento objeto4 = new ChefeDepartamento("kaique", "13660435457", "08-03-2004",
         "123456", "06-09-2007", 500.00,
         "Computação", "06-04-2019", 1500.00);

        objeto1.mostrarPessoa();
        objeto2.mostrarFuncionario();
        objeto3.mostrarAluno();
        objeto4.mostraChefe();
    }
}
