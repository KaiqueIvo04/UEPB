#iniciando
import pygame #importar biblioteca pygame
from pygame.locals import* #importar todas as variáveis do sub modulo locals da biblioteca
from sys import exit #importar exit da biblioteca sys para fechar o jogo
from random import randint #importar função de sortear números da biblioteca random

pygame.init() # inicializar a pygame



musica_moeda = pygame.mixer.Sound('smw_kick.wav') #importar som de ação
#objetos de tela
largura = 800
altura = 600
x = int(largura/2)
y = int(altura/2)
xMaca = randint(100,700)
yMaca = randint(100,500)
pontos = 0
fonte = pygame.font.SysFont('calibri',35,bold=False,italic=True)
tela = pygame.display.set_mode((largura,altura))
pygame.display.set_caption("Snake")
fps = pygame.time.Clock()
#função para movimento da cobra
lista_cobra = []
def aumenta_cobra(lista_cobra):
    for XeY in lista_cobra:
        #XeY[0] = x
        #XeY[1] = y
        pygame.draw.rect((tela),(0,255,0),(XeY[0],XeY[1],30,30))
#loop do jogo
while True:
    fps.tick(60) #definir fps
    tela.fill((255,255,255))       #pintar fundo de tela
    mensagem = f'Pontuação: {pontos}' #mostrar pontuação
    texto_formatado = fonte.render(mensagem, True, (0,0,0)) #formatação do texto da pontuação
    tela.blit(texto_formatado, (600,100)) #colocar texto 
    cobra = pygame.draw.rect((tela), (0,255,0), (x,y,30,30))  #desenhar cobra
    maca = pygame.draw.rect((tela), (255,0,0), (xMaca,yMaca,30,30))  #desenhar maçã
    #colisões
    if cobra.colliderect(maca):
        xMaca = randint(100,700)
        yMaca = randint(100,500)
        pontos += 1
        musica_moeda.play() #dar play no som da ação
    #Controles de manter pressão
    if pygame.key.get_pressed()[K_a]:
        x -= 20
    if pygame.key.get_pressed()[K_w]:
        y -= 20
    if pygame.key.get_pressed()[K_s]:
        y += 20
    if pygame.key.get_pressed()[K_d]:  
        x += 20       
    #configuração para o efeito cobra
    lista_cabeca = []
    lista_cabeca.append(x)
    lista_cabeca.append(y)
    lista_cobra.append(lista_cabeca)
    aumenta_cobra(lista_cobra)
    #configuração para fechar o jogo na janela
    for event in pygame.event.get():
        if event.type == QUIT:
            pygame.quit()
            exit()
      

    
    #fim do loop/atualizar tela
    pygame.display.update()
    #utilizar pygame.display.flip() pq é melhor
