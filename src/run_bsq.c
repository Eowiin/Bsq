/*
** EPITECH PROJECT, 2021
** Bsq
** File description:
** run_bsq.c
*/

#include "bsq.h"

static void get_size_square(int **tab, bsq_t *bsq, int i, int j)
{
    if (tab[i][j] == bsq->size) {
        bsq->biggest_square = bsq->size;
        bsq->i = i - 1;
        bsq->j = j - 1;
        bsq->size += 1;
    }
}

static void locate_square(int **tab, bsq_t *bsq)
{
    bsq->size = 1;
    for (int i = 1; tab[i] != NULL; ++i) {
        for (int j = 1; j < bsq->width + 1; ++j) {
            get_size_square(tab, bsq, i, j);
        }
    }
}

void run_bsq(bsq_t *bsq)
{
    char **array = NULL;
    int **tab = NULL;

    get_size_map(bsq);
    array = change_to_array(bsq);
    tab = change_to_int_array(array, bsq);
    locate_square(tab, bsq);
    display_map(array, bsq);
    free_array(array);
    free_tab(tab);
}
