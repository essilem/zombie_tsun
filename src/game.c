/*
** EPITECH PROJECT, 2022
** game
** File description:
** test
*/

#include "../include/radar.h"

int destroy_all_menu(struct main_menu mygame)
{
    sfSprite_destroy(mygame.obj); sfTexture_destroy(mygame.play);
    sfSprite_destroy(mygame.objset); sfTexture_destroy(mygame.setting);
    sfSprite_destroy(mygame.objbon); sfTexture_destroy(mygame.bonus);
    sfSprite_destroy(mygame.objoth); sfTexture_destroy(mygame.other);
    sfSprite_destroy(mygame.background); sfTexture_destroy(mygame.map);
    return 0;
}

void if_click(struct main_menu mygame, int x, int x1, int y, int y1, char *str)
{
    mygame.mouse = sfMouse_getPositionRenderWindow(mygame.window);
    mygame.button = sfMouse_isButtonPressed(sfMouseLeft);
    if (mygame.mouse.x >= x && mygame.mouse.x <= x1 && 
    mygame.mouse.y >= y && mygame.mouse.y <= y1){
        if (mygame.event.type == sfEvtMouseButtonPressed)
            my_putstr(str);
            /*if (= 'p') {
                my_putstr("non");
                //destroy_all_menu(mygame);
                play();
            }/* else {
                my_putstr(str);
            }*/
            //settings(rpg);
    }
}

int game(sfRenderWindow* window, sfVideoMode mode)
{
    struct main_menu mygame;
    sfClock* clock = sfClock_create(); int seconds = 0;
    sfVector2f position; position.x = 1400; position.y = 750;
    sfVector2f scale = {0.4, 0.4};
    sfVector2f scale01 = {1.60 , 1.65};
    sfRenderWindow_setFramerateLimit(window, 60);
    mygame.map = sfTexture_createFromFile("bonus/black_fond.jpg", NULL);
    mygame.background = sfSprite_create();
    sfSprite_setTexture(mygame.background, mygame.map, sfTrue);
    sfSprite_setScale(mygame.background, scale01);

    mygame.play = sfTexture_createFromFile("bonus/play.png", NULL);
    mygame.obj = sfSprite_create();
    sfSprite_setPosition(mygame.obj, position);
    sfSprite_setScale(mygame.obj, scale);

    sfVector2f scaleset = {0.3, 0.3};

    mygame.posisetting.x = 1500; mygame.posisetting.y = 500;
    mygame.setting = sfTexture_createFromFile("bonus/play.png", NULL);
    mygame.objset = sfSprite_create();
    sfSprite_setPosition(mygame.objset, mygame.posisetting);
    sfSprite_setScale(mygame.objset, scaleset);
    
    mygame.posibonus.x = 1500; mygame.posibonus.y = 300;
    mygame.bonus = sfTexture_createFromFile("bonus/play.png", NULL);
    mygame.objbon = sfSprite_create();
    sfSprite_setPosition(mygame.objbon, mygame.posibonus);
    sfSprite_setScale(mygame.objbon, scaleset);

    mygame.posiother.x = 1500; mygame.posiother.y = 100;
    mygame.other = sfTexture_createFromFile("bonus/play.png", NULL);
    mygame.objoth = sfSprite_create();
    sfSprite_setPosition(mygame.objoth, mygame.posiother);
    sfSprite_setScale(mygame.objoth, scaleset);

    while (sfRenderWindow_isOpen(window)) {
        
        sfSprite_setPosition(mygame.obj, position);
        sfSprite_setPosition(mygame.objset, mygame.posisetting);
        sfSprite_setPosition(mygame.objbon, mygame.posibonus);
        sfSprite_setPosition(mygame.objoth, mygame.posiother);
        while (sfRenderWindow_pollEvent(window, &mygame.event)) {
            mygame.window = window;
            if_click(mygame, 1500, 1850, 800, 980, "play"); //play
            if_click(mygame, 1500, 1800, 500, 650, "set"); //set
            if_click(mygame, 1500, 1800, 300, 450, "bonus"); //bonus
            if_click(mygame, 1500, 1800, 100, 250, "other"); //other
            sfVector2i mousepos = sfMouse_getPositionRenderWindow(window);
            if (mygame.event.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyEscape))
                sfRenderWindow_close(window);
        }
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, mygame.background, NULL);
        sfRenderWindow_drawSprite(window, mygame.obj, NULL);
        sfRenderWindow_drawSprite(window, mygame.objset, NULL);
        sfRenderWindow_drawSprite(window, mygame.objbon, NULL);
        sfRenderWindow_drawSprite(window, mygame.objoth, NULL);
        sfRenderWindow_display(window);
        if (sfTime_asSeconds(sfClock_getElapsedTime(clock)) > 0.1) {
            if (seconds == 0) {
                sfSprite_setTexture(mygame.obj, mygame.play, sfTrue);
                sfSprite_setTexture(mygame.objset, mygame.setting, sfTrue);
                sfSprite_setTexture(mygame.objbon, mygame.bonus, sfTrue);
                sfSprite_setTexture(mygame.objoth, mygame.other, sfTrue);
                seconds = seconds + 1;
            }
            sfClock_restart(clock);
        }
    }
    return (0);
}
