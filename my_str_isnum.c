/*
** EPITECH PROJECT, 2023
** my_str_isnum.c
** File description:
** my_str_isnum
*/
#include "my.h"

int my_str_isnum(char const *str)
{
    int	i = 0;

    if (str[0] == '\0')
        return (1);
    if (str[0] == '-' && str[i + 1] != '\0')
        str++;
    while (str[i]) {
        str[i] == '.' ? i++ : i;
        if (str[i] > '9' || str[i] < '0')
            return (1);
        i++;
    }
    return (0);
}
