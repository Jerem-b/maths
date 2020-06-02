/*
** EPITECH PROJECT, 2019
** 107transfer_2019
** File description:
** horner_method.c
*/

#include "transfer.h"

double horner_method(double x, char *str)
{
    int len = strlen(str) / 2 + 1;
    int count = 0;
    double res = 0;
    int *buff = malloc(sizeof(int) * (len + 1));

    for (int i = 0; i < len * 2; i += 2) {
        buff[count] = str[i] - '0';
        count++;
    }
    buff[count] = '\0';
    for (int i = 0; i < len; i++) {
        res += buff[i] * pow(x, i);
    }
    free(buff);
    return res;
}