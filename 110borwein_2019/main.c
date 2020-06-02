/*
** EPITECH PROJECT, 2019
** 110borwein_2019
** File description:
** main.c
*/

#include "src/borwein.h"

int main(int ac, char **av)
{
    struct s_mid *mid = malloc(sizeof(struct s_mid));
    struct s_simp *simp = malloc(sizeof(struct s_simp));
    struct s_trap *trap = malloc(sizeof(struct s_trap));

    error_handling(ac, av);
    fill_struct(mid, simp, trap, av);
    mid_method(mid);
    trap_method(trap);
    simp_method(simp);
    display(mid, simp, trap);
    free(mid);
    free(simp);
    free(trap);
    return 0;
}