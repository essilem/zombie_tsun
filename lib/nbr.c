/*
** EPITECH PROJECT, 2023
** nbr
** File description:
** all for int
*/

#include "../zombie.h"

int my_getnbr(char *str)
{
    int nb = 0;
    int isneg = 1;
    int i = 0;
    while (str[i] == '+' || str[i] == '-'){
        if (str[i] == '-')
            isneg = isneg * -1;
        i++;
    } while (str[i] != '\0'){
        if (str[i] >= '0' && str[i] <= '9'){
            nb = nb * 10;
            nb = nb + str[i] - '0';
            i++;
            } else
            return (nb * isneg);
    } return (nb * isneg);
}

int my_put_nbr(int nb)
{
    int n = 0;
    if (nb < 0){
        my_putchar ('-');
        nb = -nb;
    } else if (nb < 10) {
        my_putchar(nb + '0');
    } if (nb > 9) {
        my_put_nbr(nb / 10);
        n = nb % 10;
        my_putchar(n + '0');
    }
}

int my_strlen(char const *str)
{
    int n = 0;
    while (str[n] != '\0'){
        n = n + 1;
    } return (n);
}

int my_tablen(char **tab)
{
    int n = 0;
    while (tab[n] != NULL) {
        n = n + 1;
    }
    return (n);
}
