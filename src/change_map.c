/*
** EPITECH PROJECT, 2021
** Bsq
** File description:
** change_map.c
*/

#include "bsq.h"

static int change_values(int **tab, char **map, int i, int j)
{
    int stock = tab[i][j - 1];

    if (tab[i - 1][j] < stock) {
        stock = tab[i - 1][j];
    }
    if (tab[i - 1][j - 1] < stock) {
        stock = tab[i - 1][j - 1];
    }
    if (map[i - 1][j - 1] == '.') {
        stock += 1;
    }
    return stock;
}

static int **update_tab(int **tab, char **map, bsq_t *bsq)
{
    for (int i = 1; i < bsq->height + 1; ++i) {
        for (int j = 1; j < bsq->width + 1; ++j) {
            tab[i][j] = change_values(tab, map, i, j);
        }
    }
    return tab;
}

static int fill_int_map(int **tab, int i, int j)
{
    if (i == 0) {
        tab[i][j] = 0;
    } else if (j == 0) {
        tab[i][j] = 0;
    } else {
        tab[i][j] = -1;
    }
    return tab[i][j];
}

int **change_to_int_array(char **map, bsq_t *bsq)
{
    int **tab = malloc(sizeof(int *) * (bsq->height + 2));

    for (int i = 0; i < bsq->height + 1; ++i) {
        tab[i] = malloc(sizeof(int) * (bsq->width + 2));
        tab[i][bsq->width + 1] = -3;
    }
    for (int i = 0; i < bsq->height + 1; ++i) {
        for (int j = 0; j < bsq->width + 1; ++j) {
            tab[i][j] = fill_int_map(tab, i, j);
        }
    }
    tab = update_tab(tab, map, bsq);
    tab[bsq->height + 1] = NULL;
    return tab;
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
