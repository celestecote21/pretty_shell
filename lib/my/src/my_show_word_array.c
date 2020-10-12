/*
** EPITECH PROJECT, 2020
** my_show_word_array
** File description:
** show all the string in a array of string
*/

void my_putstr(char const *str);
void my_putchar(char c);

int my_show_word_array(char * const *tab)
{
    int i = 0;

    while (tab[i]) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
    return 0;
}
