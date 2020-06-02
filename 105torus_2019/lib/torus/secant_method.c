/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main file
*/

#include "torus.h"

void secant_method(struct s_param *p)
{
    float x_n_plus_1 = 1;
    float x_n_minus_1;

    p->x_n = f(1, p);
    while (1) {
        x_n_plus_1 = p->x_n - (f(p->x_n, p)/((f(p->x_n, p) - f(x_n_minus_1, p))
        /(p->x_n - x_n_minus_1)));
        if (p->x_n == x_n_plus_1)
            break;
        printf("x = %.*f\n", p->n, x_n_plus_1);
        x_n_minus_1 = p->x_n;
        p->x_n = x_n_plus_1;
    }
}