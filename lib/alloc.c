/*
** EPITECH PROJECT, 2023
** alloc
** File description:
** for malloc/free tab
*/

#include "../zombie.h"

char **malloc_tab(int col, int line)
{
    char **tab = malloc(sizeof(char *) * (line + 1));
    for (int i = 0; i < line; i++)
        tab[i] = malloc(sizeof(char) * (col + 1));
    return tab;
}

void free_tab(char **tab)
{
    if (tab == NULL)
        return;
    for (int n = 0; tab[n] != NULL; n++){
        free(tab[n]);
    } free(tab);
}
