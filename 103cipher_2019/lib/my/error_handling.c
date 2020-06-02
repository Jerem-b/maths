/*
** EPITECH PROJECT, 2019
** error_handling
** File description:
** search errors in 103cipher arguments
*/
#include "103cipher.h"

int error_handling(int ac, char **av)
{
    if (ac != 4)
        return 84;
    for (int i = 0; av[1][i] != '\0'; i++) {
        if (av[1][i] < 0 || av[1][i] > 127)
            return 84;
    }
    for (int j = 0; av[2][j] != '\0'; j++) {
        if (av[2][j] < 0 || av[2][j] > 127)
            return 84;
    }
}
