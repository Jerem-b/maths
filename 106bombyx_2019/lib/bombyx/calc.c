/*
** EPITECH PROJECT, 2019
** 106bombyx_2019
** File description:
** calc.c
*/

#include "bombyx.h"

void calc_with_k(struct s_data *stct_data)
{
    stct_data->xn_1 = stct_data->n;
    for (int i = 1; i <= 100; i++) {
        printf("%d %.2f\n", i, stct_data->xn_1);
        stct_data->xn_1 = stct_data->k*stct_data->xn*(1000-stct_data->xn)/1000;
        stct_data->xn = stct_data->xn_1;
    }
}

void calc_with_i(struct s_data *data)
{
    for (; data->k < 4; data->k += 0.01) {
        for (int i = 1; i <= data->i1; i++) {
            for (; i < data->i0; i++)
                data->n = data->k*data->n*(1000-data->n)/1000;
            data->n = data->k*data->n*(1000-data->n)/1000;
            printf("%.2f %.2f\n", data->k, data->n);
        }
    }
}

void calc(int ac, struct s_data *stct_data)
{
    if (ac == 3)
        calc_with_k(stct_data);
    else if (ac == 4)
        calc_with_i(stct_data);
}