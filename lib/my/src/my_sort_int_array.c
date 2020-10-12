/*
** EPITECH PROJECT, 2020
** my_sort_int_array
** File description:
** my_sort_int_array.c 
*/

void my_swap(int *a, int *b);

static void sort(int *array, int i, int *changed)
{
    if (array[i] > array[i + 1]) {
        *changed = 1;
        my_swap(array + i, array + i + 1);
    }
}

void my_sort_int_array(int *array, int size)
{
    int changed = 1;
    while (changed) {
        changed = 0;
        for (int i = 0; i < size - 1; i++) {
            sort(array, i, &changed);
        }
    }
}
