/*
** EPITECH PROJECT, 2019
** struct
** File description:
** struct
*/

#include<unistd.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/System/Clock.h>
#include <stdlib.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#ifndef RADAR
    #define RADAR

int main(void);
int my_getnbr(char *str);
char **my_str_toword_array(char * str, char c);
int my_putstr(char const* str);
int game(sfRenderWindow* window, sfVideoMode mode);
void my_putchar(char c);
int my_put_nbr(int nb);
int fdy(char **tab, int x);
int fdx(char **tab, int x);
int rey(char **tab, int x);
int rex(char **tab, int x);
int my_getnbr(char *str);
struct main_menu{
    int n, a, t, i;
    sfRenderWindow* window;
    sfTime time;
    sfTexture* play;
    sfSprite* obj;
    sfVector2f planeposi;
    sfTexture* map;
    sfTexture* plane01;
    sfTexture* plane02;
    sfTexture* tower;
    sfTexture* tower01;
    sfSprite* obj01;
    sfSprite* obj02;
    sfSprite* background;
    sfSprite* obje;
    sfSprite* obje01;
    sfEvent event;
};

#endif
