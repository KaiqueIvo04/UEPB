package mensuracao5;

public class Usuario {
    private String login, senha;

    public Usuario(String login, String senha){
        this.login = login;
        this.senha = senha;
    }

    public void mostrarUsuario(){
        System.out.println("Usuário: "+ login + " Senha: "+ senha);
    }
}