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
    int **int_map = NULL;

    get_size_map(bsq);
    array = change_to_array(bsq);
    free_array(array);
}
