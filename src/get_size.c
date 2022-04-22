/*
** EPITECH PROJECT, 2021
** Bsq
** File description:
** get_size.c
*/

#include "bsq.h"

void get_size_map(bsq_t *bsq)
{
    int width = 0;
    char *map = bsq->map;

    for (int i = my_intlen(my_getnbr(map)) + 1; map[i] != '\n'; ++i) {
        width += 1;
    }
    bsq->width = width;
    bsq->height = my_getnbr(map);
}
