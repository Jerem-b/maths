/*
** EPITECH PROJECT, 2019
** 107transfer_2019
** File description:
** error_handling.c
*/

#include "transfer.h"

int help(void)
{
    printf("USAGE\n    ./107transfer [num den]*\n\nDESCRIPTION\n    num     ");
    printf("polynomial numerator defined by its coefficients\n    ");
    printf("den     polynomial denominator defined by its coefficients\n");
    exit(0);
}

int error_handling(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        help();
    if ((ac - 1) % 2 != 0)
        exit(84);
}