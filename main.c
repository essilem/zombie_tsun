/*
** EPITECH PROJECT, 2022
** open
** File description:
** test
*/

#include "radar.h"

int main(void)
{
    int fd, nb = 0, l = 0;
    struct stat map;
    sfRenderWindow* window; sfVideoMode mode = {1920, 1080, 32};
    window = sfRenderWindow_create(mode, "My Radar", sfResize | sfClose, NULL);
    game(window, mode);
    return 0;
}
