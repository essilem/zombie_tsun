/*
** EPITECH PROJECT, 2022
** game
** File description:
** test
*/

#include "radar.h"

int fdy(char **tab, int x)
{
    while (x != my_getnbr(tab[4])){
        if (x < my_getnbr(tab[4])){
            x = x + my_getnbr(tab[5]);
        } if (x > my_getnbr(tab[4])){
            x = x - my_getnbr(tab[5]);
        } else {
            x = x;
        } break;
    } return x;
}

int fdx(char **tab, int x)
{
    while (x != my_getnbr(tab[3])){
        if (x < my_getnbr(tab[3])){
            x = x + my_getnbr(tab[5]);
        } if (x > my_getnbr(tab[3])){
            x = x - my_getnbr(tab[5]);
        } else {
            x = x;
        } break;
    } return x;
}

int rey(char **tab, int x)
{
    while (x != my_getnbr(tab[4])){
        if (x < my_getnbr(tab[4])){
            x++;
        } if (x > my_getnbr(tab[4])){
            x--;
        } else {
            x = x;
        } break;
    } return x;
}

int rex(char **tab, int x)
{
    while (x != my_getnbr(tab[3])){
        if (x < my_getnbr(tab[3])){
            x++;
        } if (x > my_getnbr(tab[3])){
            x--;
        } else {
            x = x;
        } break;
    } return x;
}
