/*
** EPITECH PROJECT, 2021
** Bsq
** File description:
** init_structure.c
*/

#include "bsq.h"

bsq_t *init_structure(bsq_t *bsq)
{
    bsq = malloc(sizeof(bsq_t));
    bsq->width = 0;
    bsq->height = 0;
    bsq->i = 0;
    bsq->j = 0;
    bsq->biggest_square = 0;
    bsq->size = 0;
    return bsq;
}
