/*
** EPITECH PROJECT, 2022
** open
** File description:
** test
*/

#include "../include/radar.h"

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

char **my_str_toword_array(char * str, char c)
{
    char **tab = malloc(sizeof(char*) * (count_char(str, c) + 1));
    int a = 0, z = 0, e = 0, len = 0;
    while (str[a] != '\0'){
        if (str[a] != c) {
            len = count_lines(str, c, a, len);
            tab[z] = malloc(sizeof(char) * (len + 1));
            for(int l = 0; l < len; l++){
                tab[z][l] = str[l + a];
            }
            tab[z][len] = '\0';
            z++;
            a = a + len;
            len = 0;
        } else {
            a++;
        }
    } tab[z] = NULL;
    return (tab);

}