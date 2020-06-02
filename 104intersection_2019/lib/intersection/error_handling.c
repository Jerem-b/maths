/*
** EPITECH PROJECT, 2019
** 104intersection's function
** File description:
** 104intersection's function
*/

#include "104intersection.h"

int error_handling(int ac, char **av)
{
    if (ac != 9)
        return 84;
    for (int i = 1; i < ac; i++) {
        for (int j = 0; j < my_strlen(av[i]); j++) {
            if (av[i][j] == '-' || av[i][j] == '.')
                j++;
            if (av[i][j] < '0' || av[i][j] > '9')
                return 84;
        }
    }
    return 0;
}
