/*
** EPITECH PROJECT, 2019
** 110borwein_2019
** File description:
** mid_method.c
*/

#include "borwein.h"

void mid_method(struct s_mid *mid)
{
    double offset = 5000.0/10000.0;

    for (int i = 0; i < 10000; i++)
        mid->result += calculus(((double)i + offset) * offset, mid->n);
    mid->result *= offset;
    mid->diff = fabs(PI/2 - mid->result);
}