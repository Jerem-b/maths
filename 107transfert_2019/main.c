/*
** EPITECH PROJECT, 2019
** 107transfer_2019
** File description:
** main.c
*/

#include "src/transfer.h"

int main(int ac, char **av)
{
    struct s_math *args = malloc(sizeof(struct s_math));

    error_handling(ac, av);
    get_args(ac, av, args);
    calc(args);
    for (int i = 0; i < args->amnt_args; i++) {
        free(args->args[i]);
    }
    free(args);
}