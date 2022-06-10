import pygame
from pygame.locals import*
from sys import exit


pygame.init()

largura_tela = 1360
altura_tela = 720
sapo_x = int(largura_tela/2)
sapo_y = int(altura_tela/2)
PRETO = (0,0,0)

tela = pygame.display.set_mode((largura_tela,altura_tela))
pygame.display.set_caption('Sprites')

class Sapo(pygame.sprite.Sprite): #cria classe de sprites da pygame
    def __init__(self):
        pygame.sprite.Sprite.__init__(self) #inicializa a classe de sprites
        self.sprites = []
        self.sprites.append(pygame.image.load('Tutorial 1 pygame/sprites/attack_1.png'))
        self.sprites.append(pygame.image.load('Tutorial 1 pygame/sprites/attack_2.png'))
        self.sprites.append(pygame.image.load('Tutorial 1 pygame/sprites/attack_3.png'))
        self.sprites.append(pygame.image.load('Tutorial 1 pygame/sprites/attack_4.png'))
        self.sprites.append(pygame.image.load('Tutorial 1 pygame/sprites/attack_5.png'))
        self.sprites.append(pygame.image.load('Tutorial 1 pygame/sprites/attack_6.png'))
        self.sprites.append(pygame.image.load('Tutorial 1 pygame/sprites/attack_7.png'))
        self.sprites.append(pygame.image.load('Tutorial 1 pygame/sprites/attack_8.png'))
        self.sprites.append(pygame.image.load('Tutorial 1 pygame/sprites/attack_9.png'))
        self.sprites.append(pygame.image.load('Tutorial 1 pygame/sprites/attack_10.png'))
        #definir primeira imagem
        self.atual = 0
        self.image = self.sprites[self.atual]
        self.image = pygame.transform.scale(self.image,(128*3,64*3)) #redimendionar imagem

        self.rect = self.image.get_rect() #pega o retângulo da sprite
        self.rect.topleft = 200,480 #insere o retângulo da sprite na posição
        self.animar = False
    # metodo criado 
    def atacar(self):
        self.animar = True
    #metodo herdado da classe sprite contida na pygame para animar
    def update(self): 
        if self.animar == True:
            self.atual += 0.25
            if self.atual >= len(self.sprites):
                self.atual = 0
                self.animar = False
            self.image = self.sprites[int(self.atual)]
            self.image = pygame.transform.scale(self.image,(128*3,64*3))

todasSprites = pygame.sprite.Group() #cria um grupo de sprites
sapo = Sapo()
todasSprites.add(sapo) #adiciona a sprite sapo ao grupo
imagem_fundo = pygame.image.load('Tutorial 1 pygame/sprites/Fundo.jpg').convert()
imagem_fundo = pygame.transform.scale(imagem_fundo,(1360,720))
fps = pygame.time.Clock()
while True:
    tela.fill((PRETO))
    tela.blit(imagem_fundo,(0,0))
    fps.tick(60)#desenhar sprite
    todasSprites.draw(tela)
    todasSprites.update()


    for event in pygame.event.get():
        if event.type == QUIT:
            pygame.quit()
            exit()
        if event.type == KEYDOWN:
            sapo.atacar()
    

    pygame.display.flip()
