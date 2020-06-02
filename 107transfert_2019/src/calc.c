/*
** EPITECH PROJECT, 2019
** 107transfer_2019
** File description:
** calc.c
*/

#include "transfer.h"

void calc(struct s_math *args)
{
    double result;
    double a;
    double b;

    for (double i = 0.000; i < 1.001; i += 0.001) {
        result = 1;
        for (int j = 0; j < args->amnt_args; j += 2) {
            a = horner_method(i, args->args[j]);
            b = horner_method(i, args->args[j + 1]);
            result *= a / b;
        }
        printf("%.3f -> %.5f\n", i, result);
    }
}