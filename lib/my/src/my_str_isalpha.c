/*
** EPITECH PROJECT, 2020
** my_str_isalpha
** File description:
** check if the string is alpha
*/

int my_str_isalpha(const char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            continue;
        if (str[i] >= 'A' && str[i] <= 'Z')
            continue;
        return (0);
    }
    return (1);
}
