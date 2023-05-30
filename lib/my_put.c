/*
** EPITECH PROJECT, 2023
** put
** File description:
** all for put
*/

#include "../zombie.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char const* str)
{
    write(1, str, my_strlen(str));
}

int put_tab(char **tab)
{
    int o = 0;
    while (tab[o] != NULL) {
        my_putstr(tab[o]);
        my_putchar('\n');
        o++;
    }
}

int putint_tab(int **tab)
{
    for (int i = 0; tab[i] != NULL; i++){
        for (int e = 0; tab[i][e] != '\0'; e++)
            my_put_nbr(tab[i][e]);
    }
}
