/*
** EPITECH PROJECT, 2019
** 110borwein_2019
** File description:
** display.c
*/

#include "borwein.h"

void display(struct s_mid *m,struct s_simp *s, struct s_trap *t)
{
    printf("Midpoint:\nI%d = %.10f\ndiff = %.10f\n\n", m->n,m->result,m->diff);
    printf("Trapezoidal:\nI%d = %.10f\ndiff = %.10f\n",t->n,t->result,t->diff);
    printf("\nSimpson:\nI%d = %.10f\ndiff = %.10f\n", s->n,s->result,s->diff);
}