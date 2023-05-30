/*
** EPITECH PROJECT, 2023
** .h
** File description:
** the .h of lib
*/

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef ZOMBIE
    #define ZOMBIE

typedef struct str{
    int len;
    int z;
    int a;
} str_toword ;

int main(int ac, char **av);

int menu1(void);

//dans la lib
char **my_str_toword_array(char * str, char c);

void my_putchar(char c);
void my_putstr(char const *str);
int put_tab(char **tab);
int putint_tab(int **tab);

int my_getnbr(char *str);
int my_put_nbr(int nb);
int my_strlen(char const *str);
int my_tablen(char **tab);

char *commande(char *cmd);
char *my_strdup(char *str);

void free_tab(char **tab);
char **malloc_tab(int col, int line);


#endif
