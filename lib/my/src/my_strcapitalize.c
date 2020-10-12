/*
** EPITECH PROJECT, 2020
** my_strcapitalize.c
** File description:
** put a capitalize letter at every first letter
*/

char *my_strlowcase(char *str);

static int check_next(char bef_c)
{
    if ((bef_c >= 'a' && bef_c <= 'z') || (bef_c >= 'A' && bef_c <= 'Z'))
        return (0);
    else if (bef_c > '0' && bef_c < '9')
        return (0);
    else
        return (1);
}

static int check_need_up(char *str, int i)
{
    char bef_c = str[i - 1];

    if (str[i] < 'a' || str[i] > 'z')
        return (0);
    if (i == 0)
        return (1);
    return check_next(bef_c);
}

char *my_strcapitalize(char *str)
{
    my_strlowcase(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (check_need_up(str, i) == 1)
            str[i] = str[i] - 32;
    }
    return (str);
}
