/*
** EPITECH PROJECT, 2020
** my_str_isupper
** File description:
** check if all the string is compsed of alpha char in upper case
*/

int my_str_isupper(const char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            continue;
        return (0);
    }
    return (1);
}
