# AW pygame notes
import pygame

pygame.init()

screen = pygame.display.set_mode((1200, 720))
pygame.display.set_caption("Pygame Tutorial")
pos_x = 100
pos_y = 100

img = pygame.image.load('Notes\ufo.png').convert_alpha()

img_rect = img.get_rect(top_right=(512, 512))

while True:
    screen.fill((0, 0, 0))
    # this is width and height,and x and y position
    pygame.draw.rect(screen, (255, 0, 0), (pos_x, pos_y, 100, 100))
    # impost image

    # this is center position and radius
    # this is color, position(600,360), radius((50))
    pygame.draw.circle(screen, (0, 255, 0), (600, 360), 50)

    screen.blit(img, img_rect)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            exit()
        keys = pygame.key.get_pressed()
        if keys[pygame.K_LEFT]:
            pos_x -= 20
        if keys[pygame.K_RIGHT]:
            pos_x += 10
            if pos_x == 600 - 50:
                pos_x = 0
        if keys[pygame.K_UP]:
            pos_y -= 20
        if keys[pygame.K_DOWN]:
            pos_y += 20

    pygame.display.flip()

# why isnt this working
    pygame.time.Clock().tick(60)
