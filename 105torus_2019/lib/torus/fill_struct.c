/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main file
*/

#include "torus.h"

void fill_struct(int ac, char **av, struct s_param *p)
{
    p->option = atoi(av[1]);
    p->a = atof(av[6]);
    p->b = atof(av[5]);
    p->c = atof(av[4]);
    p->d = atof(av[3]);
    p->e = atof(av[2]);
    p->n = atoi(av[7]);
}