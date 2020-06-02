/*
** EPITECH PROJECT, 2019
** 109titration
** File description:
** display.c
*/

#include "titration.h"

void display(struct s_math *math)
{
    int pos = 0;
    printf("Derivative:\n");
    for (int i = 0; i < math->amnt_data - 2; i++)
        printf("%.1f ml -> %.2f\n", math->volume[i + 1], math->derivative[i]);
    printf("\nEquivalence point at %.1f ml\n", math->equivalence_derivative);
    printf("\nSecond derivative:\n");
    for (int i = 0; i < math->amnt_data - 4; i++)
        printf("%.1f ml -> %.2f\n", math->volume[i+2],math->derivative_sec[i]);
    printf("\nSecond derivative estimated:\n");
    for (float i = math->equivalence_derivative_sec; i <=
    math->maximum + 0.1; i += 0.1) {
        printf("%.1f ml -> %.2f\n", i, math->derivative_est[pos]);
        pos++;
    }
    printf("\nEquivalence point at %.1f ml\n", math->equivalence_point);

}