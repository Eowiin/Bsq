/*
** EPITECH PROJECT, 2021
** Bsq
** File description:
** check_error.c
*/

#include "bsq.h"

static int check_map(bsq_t *bsq, int fd, struct stat buf)
{
    bsq->map = malloc(sizeof(char) * (buf.st_size + 1));
    if (bsq->map == NULL) {
        write(2, "Allocating memory failed\n", 25);
        return ERROR;
    }
    if (read(fd, bsq->map, buf.st_size) == -1) {
        write(2, "Read failed\n", 12);
        free(bsq->map);
        return ERROR;
    }
    bsq->map[buf.st_size] = '\0';
    if (my_strlen(bsq->map) == 0) {
        write(2, "Map is empty\n", 13);
        free(bsq->map);
        return ERROR;
    }
    return SUCCESS;
}

static int get_map(bsq_t *bsq, char const *file)
{
    int fd = open(file, O_RDONLY);
    struct stat buf;

    if (fstat(fd, &buf) == -1 || fd == -1) {
        write(2, "Open or get size failed\n", 24);
        return ERROR;
    }
    if (check_map(bsq, fd, buf) == ERROR) {
        close(fd);
        return ERROR;
    }
    close(fd);
    return SUCCESS;
}

int check_error(int ac, char const **av, bsq_t *bsq)
{
    if (ac != 2) {
        write(2, "Program needs an argument !\n", 28);
        return ERROR;
    }
    if (get_map(bsq, av[1]) == ERROR) {
        return ERROR;
    }
    return SUCCESS;
}
