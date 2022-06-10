package mensuracao5;

public class Livro {
    Titulo titulo;
    Autor autor;
    Capitulo capitulo;
    Editora editora;
    
    public Livro(String titulo, String autor, String capitulo, String editora) {
        this.titulo = new Titulo(titulo);
        this.autor = new Autor(autor);
        this.capitulo = new Capitulo(capitulo);
        this.editora = new Editora(editora);
    }

    public Livro(Titulo titulo, Autor autor, Capitulo capitulo, Editora editora) {
        this.titulo = titulo;
        this.autor = autor;
        this.capitulo = capitulo;
        this.editora = editora;
    }

    public Titulo getTitulo() {
        return titulo;
    }

    public void setTitulo(Titulo titulo) {
        this.titulo = titulo;
    }

    public Autor getAutor() {
        return autor;
    }

    public void setAutor(Autor autor) {
        this.autor = autor;
    }

    public Capitulo getCapitulo() {
        return capitulo;
    }

    public void setCapitulo(Capitulo capitulo) {
        this.capitulo = capitulo;
    }

    public Editora getEditora() {
        return editora;
    }

    public void setEditora(Editora editora) {
        this.editora = editora;
    }

}
