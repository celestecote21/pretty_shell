/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** my_swap.c 08:53 01/10
*/

void my_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

