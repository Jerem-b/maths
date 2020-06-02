/*
** EPITECH PROJECT, 2019
** 110borwein_2019
** File description:
** trap_method.c
*/

#include "borwein.h"

void trap_method(struct s_trap *trap)
{
    float offset = 5000.0/10000.0;

    for (int i = 1; i < 10000; i++)
        trap->result += calculus((double)i * offset, trap->n);
    trap->result = 0.25 * (calculus(0, trap->n) + calculus(5000, trap->n) + 
    2 * trap->result);
    trap->diff = fabs(PI/2 - trap->result);
}