/*
** EPITECH PROJECT, 2023
** str_to_word_array
** File description:
** for str to tab
*/

#include "../zombie.h"

int count_char(char *str, char c)
{
    int i = 0; int o = 0;
    while (str[i] != '\0'){
        if (str[i] == c){
            o++;
        } i++;
    } return (o + 1);
}

int count_lines(char *str, char c, int a, int len)
{
    for (int j = a; str[j] != c && str[j] != '\0'; j++) {
        len = len + 1;
    } return len;
}

char **for_of_str(char **tab, char *str, str_toword *st)
{
    for (int l = 0; l < st->len; l++){
        tab[st->z][l] = str[l + st->a];
    } return (tab);
}

char **my_str_toword_array(char * str, char c)
{
    str_toword *st = malloc(sizeof(str_toword));
    char **tab = malloc(sizeof(char*) * (count_char(str, c) + 1));
    int e = 0; st->a = 0,st->z = 0, st->len = 0;
    while (str[st->a] != '\0'){
        if (str[st->a] != c) {
            st->len = count_lines(str, c, st->a, st->len);
            tab[st->z] = malloc(sizeof(char) * (st->len + 1));
            for_of_str(tab, str, st);
            tab[st->z][st->len] = '\0';
            st->z++;
            st->a = st->a + st->len;
            st->len = 0;
        } else {
            st->a++;
        }
    } tab[st->z] = NULL;
    return (tab);
}
