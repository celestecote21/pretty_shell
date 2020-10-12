/*
** EPITECH PROJECT, 2020
** my_find_prime_sup
** File description:
** find the next prime number
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    long i = nb;

    if (nb <= 2)
        return (2);
    else if (my_is_prime(nb))
        return (nb);
    if (i % 2 == 0)
        i++;
    while (!my_is_prime(i)) {
        i += 2;
    }
    if (i > 2147483647)
        return (0);
    else
        return (i);
}
