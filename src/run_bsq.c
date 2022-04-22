/*
** EPITECH PROJECT, 2021
** Bsq
** File description:
** run_bsq.c
*/

#include "bsq.h"

void run_bsq(bsq_t *bsq)
{
    char **array = NULL;
    int **tab = NULL;

    get_size_map(bsq);
    array = change_to_array(bsq);
    tab = change_to_int_array(array, bsq);
    free_array(array);
    free_tab(tab);
}
