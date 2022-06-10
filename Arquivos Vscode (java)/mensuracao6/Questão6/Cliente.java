package mensuracao6.Questão6;

public class Cliente extends Pessoa{
    protected int codigo;

    public Cliente() {
    }
    public Cliente(String nome, String cpf, int codigo) {
        super(nome, cpf);
        this.codigo = codigo;
    }
    public Cliente(int codigo) {
        this.codigo = codigo;
    }
    public int getCodigo() {
        return codigo;
    }
    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }  
    @Override  
    public void mostraDados(){
        System.out.printf("Nome: %s CPF: %s Código: %d\n", super.nome, super.cpf, codigo);
    }
}
