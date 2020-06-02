/*
** EPITECH PROJECT, 2019
** 106bombyx_2019
** File description:
** fill_struct.c
*/

#include "bombyx.h"

void fill_struct(int ac, char **av, struct s_data *stct_data)
{
    stct_data->n = atof(av[1]);
    stct_data->xn = stct_data->n;
    if (ac == 3)
        stct_data->k = atof(av[2]);
    else if (ac == 4) {
        stct_data->k = 1;
        stct_data->i0 = atof(av[2]);
        stct_data->i1 = atof(av[3]);
    }
}