/*
** EPITECH PROJECT, 2019
** 109titration
** File description:
** my_free.c
*/

#include "titration.h"

void my_free(struct s_math *math)
{
    free(math->volume);
    free(math->ph);
    free(math->derivative);
    free(math->derivative_sec);
    free(math->derivative_est);
    free(math);
}