#include <stdlib.h>
#include "parser.h"
//#include "lib.h"
#include "my.h"


#define BUFFER_SIZE 64


static int need_cut(char c)
{
    if(c == ' ' || c == '\0')
        return (1);
    return (0);
}

static char *strdup_delim(char const *all_str, int *padding)
{
    int i = 0;
    char *res;

    while (!need_cut(all_str[i + *padding])) {
        i++;
    }
    if (i == 0)
        return  NULL;
    res = malloc(sizeof(char) * (i + 1));
    my_strncpy(res, all_str + *padding, i);
    res[i] = '\0';
    *padding = *padding + i + 1;
    return res;
}

static void rectifie_when_null(int *i, int *padding, int *nb_word)
{
    *i = *i - 1;
    *padding = *padding + 1;
    *nb_word = *nb_word - 1;
}

char **parser(char *str)
{
    int nb_word = 0;
    int padding = 0;
    char **result;
    char *temp;

    for (int i = 0; str[i]; i++)
        if (need_cut(str[i]))
            nb_word++;
    nb_word++;
    result = malloc(sizeof(char*) * (nb_word + 1));
    for (int i = 0; i < nb_word; i++){
        temp = strdup_delim(str, &padding);
        if (temp == NULL) {
            rectifie_when_null(&i, &padding, &nb_word);
        } else
            result[i] = temp;
    }
    result[nb_word] = NULL;
    return result;
}

