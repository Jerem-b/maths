/*
** EPITECH PROJECT, 2019
** message_matrix.c
** File description:
** create message matrix
*/

#include "103cipher.h"

int *message_matrix(char **av, int *size)
{
    int *matrix;
    int matrix_lenght = strlen(av[1]) + (*size - (strlen(av[1]) % *size));

    matrix = malloc(sizeof(int) * matrix_lenght);
    for (int i = 0; i != matrix_lenght; i++) {
        if (av[1][i] != '\0')
            matrix[i] = av[1][i];
        else
            matrix[i] = 0;
    }
    return (matrix);
}
