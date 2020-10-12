/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** check if the string is only numerical char
*/

int my_str_isnum(const char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            continue;
        return (0);
    }
    return (1);
}
