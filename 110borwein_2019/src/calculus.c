/*
** EPITECH PROJECT, 2019
** 110borwein_2019
** File description:
** calculus.c
*/

#include "borwein.h"

double calculus(double x, int n)
{
    double res = 1;

    if (x == 0)
        return 1.0;
    for (int k = 0; k <= n; k++)
        res *= sin(x/(2*k+1))/(x/(2*k+1));
    return res;
}