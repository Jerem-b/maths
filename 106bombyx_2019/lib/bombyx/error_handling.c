/*
** EPITECH PROJECT, 2019
** 106bombyx_2019
** File description:
** error_handling.c
*/

#include "bombyx.h"

int error_handling(int ac, char **av)
{
    if (ac == 1)
        exit(84);
    if (av[1][0] == '-')
        help();
    if (ac > 4 || ac < 3)
        exit(84);
    for (int i = 1; i < ac; i++) {
        for (int j = 0; av[i][j] != '\0'; j++) {
            if (av[i][j] != '-' && av[i][j] != '.' && (av[i][j] < '0' ||
            av[i][j] > '9'))
                exit(84);
        }
    }
}