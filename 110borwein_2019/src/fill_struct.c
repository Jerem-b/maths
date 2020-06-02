/*
** EPITECH PROJECT, 2019
** 110borwein_2019
** File description:
** fill_struct.c
*/

#include "borwein.h"

void fill_struct(struct s_mid *m, struct s_simp *s, struct s_trap *t,char **av)
{
    int nb = atoi(av[1]);

    m->n = nb;
    s->n = nb;
    t->n = nb;
    m->result = 0;
    s->result = 0;
    t->result = 0;
    m->diff = 0;
    s->diff = 0;
    t->diff = 0;
}