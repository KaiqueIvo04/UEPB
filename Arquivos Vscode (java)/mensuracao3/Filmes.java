package mensuracao3;

public class Filmes {
    private String nome, autor;
    private int ano;
    private float preco;

    public Filmes(String nome, String autor, int ano, float preco) {
        this.nome = nome;
        this.autor = autor;
        this.ano = ano;
        this.preco = preco;
    }

    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }
    public String getAutor() {
        return autor;
    }
    public void setAutor(String autor) {
        this.autor = autor;
    }
    public int getAno() {
        return ano;
    }
    public void setAno(int ano) {
        this.ano = ano;
    }
    public float getPreco() {
        return preco;
    }
    public void setPreco(float preco) {
        this.preco = preco;
    }
    @Override
    public String toString() {
        return String.format("Nome: %s  Autor: %s   Ano: %d   Preço: %.2f", nome, autor, ano, preco);
    }
}
