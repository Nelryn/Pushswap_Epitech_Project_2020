/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** libmy
*/

#include <stdlib.h>

void my_putchar(char c);

int my_putstr(char const *str)
{
    int i = 0;

    (str == NULL) ? exit (84) : 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return (0);
}