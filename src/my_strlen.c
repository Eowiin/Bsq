/*
** EPITECH PROJECT, 2021
** Bsq
** File description:
** my_strlen.c
*/

int my_strlen(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        ++count;
    }
    return count;
}
