class Gatos: #cria classe
    def __init__(self,cor,tamanho,nome): #cria o metodo criador da classe
        self.cor = cor  #insere atributo
        self.tamanho = tamanho #insere atributo
        self.nome = nome #insere atributo
    def pular (self):  #cria um método (ação)
        print(f'{self.nome}, pulou')

gato1 = Gatos("branco e preto","mediano","Téo")  #chama o método
gato1.pular()

        