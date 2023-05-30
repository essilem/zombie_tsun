/*
** EPITECH PROJECT, 2023
** funct
** File description:
** funct aléatoire
*/

#include "../zombie.h"

char *commande(char *cmd)
{
    int n = 0;
    while (cmd[n] != '\0'){
        if (cmd[n] == '\n'){
            cmd[n] = '\0';
        }n++;
    } return (cmd);
}

char *my_strdup(char *str)
{
    char *dup = malloc(sizeof(char) * my_strlen(str) + 1);
    int n = 0;
    while (str[n] != '\0'){
        dup[n] = str[n];
        n++;
    } dup[n] = '\0';
    return (dup);
}
