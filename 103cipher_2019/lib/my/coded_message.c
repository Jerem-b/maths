/*
** EPITECH PROJECT, 2019
** coded message.c
** File description:
** return your message coded
*/
#include "103cipher.h"

int *coded_message(int *c_matrix, int *message, int size, int lenght)
{
    int *matrix = malloc(sizeof(message));
    int i = 0;
    int j = 0;
    int k = 0;

    while(i != lenght) {
        matrix[i] = 0;
        k = 0 + (i / size) * size;
        for (int l = 0; l != size; l++) {
            matrix[i] = matrix[i] + c_matrix[j] * message[k];
            j = j + size;
            k = k + 1;
        }
        j = (i + 1) % size;
        i++;
    }
    return (matrix);
}
