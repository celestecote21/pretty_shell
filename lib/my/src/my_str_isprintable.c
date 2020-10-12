/*
** EPITECH PROJECT, 2020
** my_str_isprintable
** File description:
** check if every char is printable
*/

int my_str_isprintable(const char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] >= ' ' && str[i] <= '~')
            continue;
        return (0);
    }
    return (1);
}
