/*
** EPITECH PROJECT, 2019
** matrix_size.c
** File description:
** return coding matrix size
*/
#include "103cipher.h"

int matrix_size(char *str)
{
    int i = 0;
    int size = strlen(str);

    while (size > (i * i)) {
        i++;
    }
    return (i);
}
