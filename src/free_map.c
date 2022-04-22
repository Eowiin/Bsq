/*
** EPITECH PROJECT, 2021
** Bsq
** File description:
** free_map.c
*/

#include "bsq.h"

void free_tab(int **tab)
{
    for (int i = 0; tab[i] != NULL; ++i) {
        free(tab[i]);
    }
    free(tab);
}

void free_array(char **array)
{
    for (int i = 0; array[i] != NULL; ++i) {
        free(array[i]);
    }
    free(array);
}
