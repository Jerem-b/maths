/*
** EPITECH PROJECT, 2019
** 109titration
** File description:
** main.c
*/

#include "src/titration.h"

void get_max(struct s_math *m)
{
    for (int i = 1; i < m->amnt_data - 5; i++) {
        if (m->derivative_sec[i] > m->derivative_sec[i + 1]) {
            m->maximum = m->volume[i];
        }
        else if (m->derivative_sec[i] < m->derivative_sec[i + 1]) {
            m->maximum = m->volume[i + 1];
            m->ph_max = m->derivative_sec[i - 1];
        }
    }
}

int main(int ac, char **av)
{
    struct s_math *math = malloc(sizeof(struct s_math));

    if (ac > 1 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0')
        return help();
    error_handling(ac, av);
    getting_values(av, math);
    if (math->amnt_data <= 4)
        exit(84);
    derivative(math);
    derivative_sec(math);
    get_max(math);
    derivative_estimated(math);
    display(math);
    my_free(math);
    return 0;
}