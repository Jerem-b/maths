/*
** EPITECH PROJECT, 2019
** 110borwein_2019
** File description:
** error_handling.c
*/

#include "borwein.h"

int help(void)
{
    printf("USAGE\n    ./110borwein n\n\nDESCRIPTION\n    n  constant ");
    printf("defining the integral to be computed\n");
    return 0;
}

int error_handling(int ac, char **av)
{
    int n;

    if (ac != 2)
        exit(84);
    if (strcmp("-h", av[1]) == 0)
        exit(help());
    for (int i = 0; i < strlen(av[1]); i++) {
        if (av[1][i] < '0' || av[1][i] > '9')
            exit(84);
    }
    n = atoi(av[1]);
    if (n < 0 || n > 5000)
        exit(84);
}