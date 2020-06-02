/*
** EPITECH PROJECT, 2019
** 110borwein_2019
** File description:
** simp_method.c
*/

#include "borwein.h"

void simp_method(struct s_simp *simp)
{
    float offset = 5000.0/10000.0;
    double res = 0;
    double result = 0;

    for (double i = 1; i < 10000; i++)
        result += calculus(i * offset, simp->n);
    for (double i = 0; i < 10000; i++)
        res += calculus(i * offset + (offset * 0.5), simp->n);
    simp->result = (calculus(0, simp->n) + calculus(5000, simp->n) + 2 * result
     + 4 * res) * 5000.0 / 60000.0;
    simp->diff = fabs(PI/2 - simp->result);
}