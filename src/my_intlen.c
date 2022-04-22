/*
** EPITECH PROJECT, 2021
** Bsq
** File description:
** my_intlen.c
*/

int my_intlen(int number)
{
    int i = 0;

    while (number != 0) {
        number /= 10;
        ++i;
    }
    return i;
}
