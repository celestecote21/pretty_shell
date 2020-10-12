/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** tell is the given number is prime or not
** this use the 6k+/-1 propriety of prime number
*/

int my_is_prime(int nb)
{
    int i = 5;

    if (nb <= 1)
        return (0);
    if (nb <= 3)
        return (1);
    if (nb % 2 == 0 || nb % 3 == 0)
        return (0);
    while (i * i <= nb) {
        if (nb % i == 0 || nb % (i + 2) == 0)
            return (0);
        i += 6;
    }
    return (1);
}
