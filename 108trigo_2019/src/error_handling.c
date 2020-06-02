/*
** EPITECH PROJECT, 2019
** 108trigo_2019
** File description:
** error_handling.c
*/

#include "trigo.h"

int error_handling(int ac, char **av){
    char *buff[5] = {"EXP", "COS", "SIN", "COSH", "SINH"};
    if ((ac - 2) % 4 != 0)
        exit(84);
    if (ac > 1) {
        for (int i = 2; i < ac; i++) {
            for (int j = 0; j < strlen(av[i]); j++) {
                if ((av[i][j] < '0' || av[i][j] > '9') && av[i][j] != '-')
                    exit(84);
            }
        }
    }
    if (ac > 0) {
        if (strcmp(buff[0], av[1]) == 0 || strcmp(buff[1], av[1]) == 0 ||
        strcmp(buff[2], av[1]) == 0 || strcmp(buff[3], av[1]) == 0 ||
        strcmp(buff[4], av[1]) == 0)
            return 0;
        else
            exit(84);
    }
}