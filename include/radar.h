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

int my_getnbr(char *str);

struct main_menu{
    sfRenderWindow* window;
    sfTime time;
    sfEvent event;

    sfTexture* map;
    sfSprite* background;

    sfTexture* play;
    sfSprite* obj;

    sfSprite* objset;
    sfTexture* setting;
    sfVector2f posisetting;

    sfVector2f posibonus;
    sfSprite* objbon;
    sfTexture* bonus;

    sfVector2f posiother;
    sfSprite* objoth;
    sfTexture* other;

};

#endif
