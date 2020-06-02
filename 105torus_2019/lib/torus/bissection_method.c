/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main file
*/

#include "torus.h"

void bissection_method(struct s_param *p)
{
    float an = 0;
    float bn = 1;
    float mid_n;

    while (1) {
        mid_n = (an + bn)/2;
        if (f(mid_n, p) == 0 || an == mid_n) {
            break;
        }
        if (f(an, p) * f(mid_n, p) < 0) {
            an = an;
            bn = mid_n;
        }
        if (f(bn, p) * f(mid_n, p) < 0) {
            an = mid_n;
            bn = bn;
        }
        printf("x = %.*f\n", p->n, mid_n);
    }
}