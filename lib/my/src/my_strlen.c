/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** my_strlen.c
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i]) {
        i++;
    }
    return (i);
}
