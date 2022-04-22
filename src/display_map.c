/*
** EPITECH PROJECT, 2021
** Bsq
** File description:
** display_map.c
*/

#include "bsq.h"

static void display_square(char **array, int i, int j, bsq_t *bsq)
{
    int square = bsq->biggest_square - 1;

    if ((bsq->i - square <= i && i <= bsq->i) && (bsq->j - square <= j &&
    j <= bsq->j)) {
        array[i][j] = 'x';
        write(1, &array[i][j], 1);
    } else {
        write(1, &array[i][j], 1);
    }
}

void display_map(char **array, bsq_t *bsq)
{
    for (int i = 0; array[i] != NULL; ++i) {
        for (int j = 0; array[i][j] != '\0'; ++j) {
            display_square(array, i, j, bsq);
        }
    }
}
