/*
** EPITECH PROJECT, 2022
** game
** File description:
** test
*/

#include "../include/radar.h"

int game(sfRenderWindow* window, sfVideoMode mode)
{
    struct main_menu mygame;
    sfClock* clock = sfClock_create(); int seconds = 0;
    sfVector2f position; position.x = 1500; position.y = 800;
    sfVector2f scale = {0.3, 0.3};
    sfVector2f scale01 = {1.60 , 1.65};
    sfVector2f scale02 = {0.2, 0.2};
    sfRenderWindow_setFramerateLimit(window, 60);
    mygame.map = sfTexture_createFromFile("bonus/black_fond.jpg", NULL);
    mygame.background = sfSprite_create();
    sfSprite_setTexture(mygame.background, mygame.map, sfTrue);
    sfSprite_setScale(mygame.background, scale01);
    //sfVector2f positi; sfVector2f posit;sfVector2f positio; sfVector2f pos;

    mygame.play = sfTexture_createFromFile("bonus/play.png", NULL);
    mygame.obj = sfSprite_create();
    sfSprite_setPosition(mygame.obj, position);
    sfSprite_setScale(mygame.obj, scale);
    

    //     posit.x = my_getnbr(tabt[1]); posit.y = my_getnbr(tabt[2]);
    //     mygame.tower = sfTexture_createFromFile("bonus/tower.png", NULL);
    //     mygame.obje = sfSprite_create();
    //     sfSprite_setTexture(mygame.obje, mygame.tower, sfTrue);
    //     sfSprite_setPosition(mygame.obje, posit);
    //     sfSprite_setScale(mygame.obje, scale02);
    
    //     pos.x = my_getnbr(tabta[1]);pos.y = my_getnbr(tabta[2]);
    //     mygame.tower01 = sfTexture_createFromFile("bonus/tower.png", NULL);
    //     mygame.obje01 = sfSprite_create();
    //     sfSprite_setTexture(mygame.obje01, mygame.tower01, sfTrue);
    //     sfSprite_setPosition(mygame.obje01, pos);
    //     sfSprite_setScale(mygame.obje01, scale02);

     while (sfRenderWindow_isOpen(window)) {
        sfSprite_setPosition(mygame.obj, position);
        while (sfRenderWindow_pollEvent(window, &mygame.event)) {
            sfVector2i mousepos = sfMouse_getPositionRenderWindow(window);
            if (mygame.event.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyEscape))
                sfRenderWindow_close(window);
        } sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, mygame.background, NULL);
        sfRenderWindow_drawSprite(window, mygame.obj, NULL);
        sfRenderWindow_display(window);
        if (sfTime_asSeconds(sfClock_getElapsedTime(clock)) > 0.1) {
            if (seconds == 0) {
                sfSprite_setTexture(mygame.obj, mygame.play, sfTrue);
                seconds = seconds + 1;
            } sfClock_restart(clock);
        }
    } sfSprite_destroy(mygame.obj); sfTexture_destroy(mygame.map);
    sfTexture_destroy(mygame.play); sfSprite_destroy(mygame.background);
    return (0);
}
