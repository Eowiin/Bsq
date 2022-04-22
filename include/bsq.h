/*
** EPITECH PROJECT, 2021
** Bsq
** File description:
** bsq.h
*/

#ifndef BSQ_H_
    #define BSQ_H_

    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #define ERROR 84
    #define SUCCESS 0

typedef struct bsq {
    int width;
    int height;
    int i;
    int j;
    int biggest_square;
    int size;
    char *map;
} bsq_t;

void display_map(char **array, bsq_t *bsq);
void free_tab(int **tab);
int **change_to_int_array(char **map, bsq_t *bsq);
void free_array(char **array);
char **change_to_array(bsq_t *bsq);
void get_size_map(bsq_t *bsq);
int my_intlen(int number);
int my_getnbr(char const *str);
void run_bsq(bsq_t *bsq);
void free_structure(bsq_t *bsq);
int my_strlen(char const *str);
bsq_t *init_structure(bsq_t *bsq);
int check_error(int ac, char const **av, bsq_t *bsq);

#endif
