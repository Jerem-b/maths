/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main file
*/

#include "torus.h"

void newton_method(struct s_param *p)
{
    float x_n_plus_1;

    p->x_n = 0.5;
    while (1) {
        x_n_plus_1 = p->x_n - (f(p->x_n, p) / derivate(p->x_n, p));
        if (x_n_plus_1 < p->x_n)
            break;
        printf("x = %.*f\n", p->n, p->x_n);
        p->x_n = x_n_plus_1;
    }
}