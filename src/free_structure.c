/*
** EPITECH PROJECT, 2021
** Bsq
** File description:
** free_structure.c
*/

#include "bsq.h"

void free_structure(bsq_t *bsq)
{
    free(bsq->map);
    free(bsq);
}
