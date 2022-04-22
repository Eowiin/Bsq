/*
** EPITECH PROJECT, 2021
** Bsq
** File description:
** change_map.c
*/

#include "bsq.h"

int **change_to_int_array(char **map, bsq_t *bsq)
{
    return SUCCESS;
}

char **change_to_array(bsq_t *bsq)
{
    int y = 0;
    int x = 0;
    char **array = malloc(sizeof(char *) * (bsq->height + 1));

    for (int i = 0; i < bsq->height; ++i) {
        array[i] = malloc(sizeof(char) * (bsq->width + 1));
        array[i][bsq->width] = '\0';
    }
    for (int i = my_intlen(bsq->height) + 1; bsq->map[i] != '\0'; ++i) {
        array[y][x] = bsq->map[i];
        ++x;
        if (bsq->map[i] == '\n') {
            ++y;
            x = 0;
        }
    }
    array[bsq->height] = NULL;
    return array;
}
