/*
** EPITECH PROJECT, 2020
** my_str_islower
** File description:
** check if all the string is an alphanumeric value in lower case
*/

int my_str_islower(const char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            continue;
        return (0);
    }
    return (1);
}
