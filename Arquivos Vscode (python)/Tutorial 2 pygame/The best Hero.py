#importar pygame
import pygame
from pygame.locals import*
from sys import exit
import os

pygame.init()
pygame.mixer.init()
#definir pastas do jogo
diretorio_principal = os.path.dirname(__file__)
diretorio_imagens = os.path.join(diretorio_principal,'imagens')
diretorio_sons = os.path.join(diretorio_principal,'sons')


#tela
larguraTela = 1140
alturaTela = 724


tela = pygame.display.set_mode((larguraTela,alturaTela))
pygame.display.set_caption("Dude Hero")

#imagens
sprite_sheet = pygame.image.load(os.path.join(diretorio_imagens,'player.png')).convert_alpha()
imagem_fundo = pygame.image.load(os.path.join(diretorio_imagens,'c2.png')).convert_alpha()
#imagem_fundo = pygame.transform.scale(imagem_fundo,(1140,724))

#classes
class Hero(pygame.sprite.Sprite):
    def __init__(self):
        pygame.sprite.Sprite.__init__(self)
        self.imagens_heroi = []

        for i in range (5):
            img = sprite_sheet.subsurface((i*60,0), (60,92))
            #img = pygame.transform.scale(img,(*2,50*2))
            self.imagens_heroi.append(img)

        self.playerX = 160
        self.playerY = 587
        self.pos_inicial = alturaTela - 137 - 96//2

        self.index_lista = 0
        self.image = self.imagens_heroi[self.index_lista]
        self.rect = self.image.get_rect()
        self.rect.center = (self.playerX,self.playerY)
        self.pulo = False
    
    def pular(self):
        self.pulo = True

    def update(self):
        if self.pulo == True:
            if self.playerY <= 400:
                self.pulo = False
            self.playerY -= 15
            self.rect.center = (self.playerX,self.playerY)
        else:
            if self.playerY < self.pos_inicial:
                self.playerY = self.pos_inicial
            else:
                self.playerY += 10
        if self.index_lista > 4:
            self.index_lista = 0
        self.index_lista += 0.22
        self.image = self.imagens_heroi[int(self.index_lista)]

    #def anim(self):

    #def move_right(self):
     #   self.playerX += 5
      #  self.rect.center = (self.playerX,self.playerY)
       # if self.index_lista > 4:
        #    self.index_lista = 0
       # self.index_lista += 0.18
        #self.image = self.imagens_heroi[int(self.index_lista)]
            
    #def move_left(self):
     #   self.playerX -= 5
      #  self.rect.center = (self.playerX,self.playerY)
    
#grupos
todasSprites = pygame.sprite.Group()
hero = Hero()
todasSprites.add(hero)
#fps
fps = pygame.time.Clock()
#loop
while True:
    fps.tick(60)
    tela.blit(imagem_fundo,(0,0))
    todasSprites.draw(tela)
    todasSprites.update()

    for event in pygame.event.get():
        if event.type == QUIT:
            pygame.quit()
            exit()
        if event.type == KEYDOWN:
            if event.key == K_SPACE:
                if hero.playerY != hero.pos_inicial:
                    pass
                hero.pular()

        
            
    pygame.display.flip()
