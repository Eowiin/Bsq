/*
** EPITECH PROJECT, 2021
** Bsq
** File description:
** my_getnbr.c
*/

int my_getnbr(char const *str)
{
    int res = 0;
    int signe = 1;
    int j = 0;

    while (str[j] == '-') {
        if (str[j] == '-')
            signe = signe * -1;
        ++j;
    }
    while ((str[j] >= 48 && str[j] <= 57)) {
        if (str[j] >= 48 && str[j] <= 57) {
            res = res * 10;
            res = res + str[j] - '0';
        }
        ++j;
    }
    res = res * signe;
    return res;
}
