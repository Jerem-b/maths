/*
** EPITECH PROJECT, 2019
** 102architect
** File description:
** main file of 102architect 
*/

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "include/architect.h"
#include "include/struct.h"

void get_transform(int *i, char **av, struct coordinates *coord, float *matrix)
{
    if (av[*i][1] == 't') {
        translation(av,av[*i + 1], av[*i + 2], coord);
        new_matrix_t(matrix, atof(av[*i + 1]), atof(av[*i + 2]), i);
        *i = *i + 3;
    } else if (av[*i][1] == 'r') {
        rotation(av, av[*i + 1], coord);
        new_matrix_r(matrix, atof(av[*i + 1]), i);
        *i = *i + 2;
    } else if (av[*i][1] == 'z') {
        scaling(av,av[*i + 1], av[*i + 2], coord);
        new_matrix_z(matrix, atof(av[*i + 1]), atof(av[*i + 2]), i);
        *i += 3;
    } else if (av[*i][1] == 's') {
        reflection(av, av[*i + 1], coord);
        new_matrix_s(matrix, atof(av[*i + 1]), i);
        *i += 2;
    }    
}

int my_strlen(char const *str)
{
    int k = 0;

    for (int i = 0; *str != '\0'; i++) {
        str++;
        k++;
    }
    return k;
}

int is_nbr(int ac, char **av)
{
    for (int i = 1; i < ac; i++) {
        for (int j = 0; j < my_strlen(av[i]); j++) {
            if ((i == 3 && j == 0) &&av[3][0] == '-') {
                i++;
            }
            if ((av[i][j] != '-') &&(av[i][j] < '0') || (av[i][j] > '9')) {
                return 84;
            }
            if (av[3][0] != '-') {
                return 84;
            }
        }
    }
}

int error(int ac, char **av)
{
    if (av[3][0] != '-') {
        return 84;
    }
    if (av[3][1] == 'r' || av[3][1] == 's') {
        if (ac%5 != 0 || is_nbr(ac, av) == 84) {
            return 84;
        }
        else
            return 0;
    }
    if (av[3][1] == 't' || av[3][1] == 'z') {
        if (ac%6 != 0 || is_nbr(ac, av) == 84)
            return 84;
        else
            return 0;
    } else
    return 0;
}

int main(int ac, char **av)
{
    float matrix[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i = 3;
    struct coordinates coord;

    if (ac < 4)
        return 84;
    if (error(ac, av) == 0 || ac > 7) {
        coord.x = atof(av[1]);
        coord.y = atof(av[2]);
        while (i != ac)
            get_transform(&i, av, &coord, matrix);
        printf("%.2f    %.2f    %.2f\n%.2f    %.2f    %.2f\n%.2f    %.2f"
        , matrix[0], matrix[1], matrix[2], matrix[3], matrix[4],
         matrix[5], matrix[6], matrix[7]);
        printf("    %.2f\n", matrix[8]);
        printf("(%.2f, %.2f) => (%.2f, %.2f)\n", atof(av[1]), atof(av[2]),
        coord.x, coord.y);
        return 0;
    } else
        return 84;
}
