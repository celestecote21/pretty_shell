/*
** EPITECH PROJECT, 2020
** my_isneg
** File description:
** my_isneg.c 10:00 30/09
*/

void my_putchar(char c);

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');
    my_putchar('\n');
    return (0);
}
