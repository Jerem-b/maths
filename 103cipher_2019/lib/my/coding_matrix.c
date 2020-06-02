/*
** EPITECH PROJECT, 2019
** coding_matrix.c
** File description:
** create coding matrix
*/
#include "103cipher.h"

int *coding_matrix(char **av, int *size)
{
    int *matrix;

    *size = matrix_size(av[2]);
    matrix = malloc(sizeof(int) * (*size * *size));
    for (int i = 0; i != *size * *size; i++) {
        if (av[2][i] != '\0')
            matrix[i] = av[2][i];
        else {
            matrix[i] = 0;
        }
    }
    return (matrix);
}
