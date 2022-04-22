/*
** EPITECH PROJECT, 2021
** Bsq
** File description:
** main.c
*/

#include "bsq.h"

int main(int ac, char const **av)
{
    bsq_t *bsq = NULL;

    bsq = init_structure(bsq);
    if (check_error(ac, av, bsq) == ERROR) {
        free(bsq);
        return ERROR;
    }
    run_bsq(bsq);
    free_structure(bsq);
    return SUCCESS;
}
