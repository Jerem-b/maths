/*
** EPITECH PROJECT, 2019
** 106bombyx_2019
** File description:
** main.c
*/

#include "../include/bombyx.h"

int main(int ac, char **av)
{
    struct s_data *stct_data = malloc(sizeof(struct s_data));
    error_handling(ac, av);
    fill_struct(ac, av, stct_data);
    calc(ac, stct_data);
}