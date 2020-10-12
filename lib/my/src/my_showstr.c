/*
** EPITECH PROJECT, 2020
** my_showstr
** File description:
** print the string with the not printable char in hex value
*/

void my_putchar(char c);
int my_putnbr_base(int nb, const char *str);

static void put_nopritable_char(char c)
{
    my_putchar('\\');
    if (c <= 15)
        my_putchar('0');
    my_putnbr_base(c, "0123456789abcdef");
}

int my_showstr(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] < ' ' || str[i] > '~')
            put_nopritable_char(str[i]);
        else
            my_putchar(str[i]);
        i++;
    }
    return (0);
}
