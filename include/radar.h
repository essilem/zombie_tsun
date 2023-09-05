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
#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/Types.h>
#include <SFML/Graphics/PrimitiveType.h>
#include <SFML/Graphics/RenderStates.h>
#include <SFML/Graphics/Vertex.h>
#include <SFML/Window/Event.h>
#include <SFML/Window/VideoMode.h>
#include <SFML/Window/WindowHandle.h>
#include <SFML/Window/Window.h>
#include <SFML/System/Vector2.h>
#include <stddef.h>

#ifndef RADAR
    #define RADAR

int main(void);

int my_getnbr(char *str);
char **my_str_toword_array(char * str, char c);

int my_putstr(char const* str);

int game(sfRenderWindow* window, sfVideoMode mode);

int play(void);

void my_putchar(char c);
int my_put_nbr(int nb);

int my_getnbr(char *str);

struct main_menu{
    sfRenderWindow* window;
    sfTime time;
    sfEvent event;

    sfMouseButton button;
    sfVector2i mouse;

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

struct play_home{

};

#endif
