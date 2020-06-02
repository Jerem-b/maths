/*
** EPITECH PROJECT, 2019
** 107transfer_2019
** File description:
** get_args.c
*/

#include "transfer.h"

void get_args(int ac, char **av, struct s_math *args)
{
    int i = 1;

    args->args = malloc(sizeof(char *) * (ac + 1));
    while (i < ac) {
        args->args[i - 1] = malloc(sizeof(char) * (strlen(av[i]) + 1));
        strcpy(args->args[i - 1], av[i]);
        args->args[i - 1][strlen(av[i])] = '\0';
        i++;
    }
    args->amnt_args = ac - 1;
}