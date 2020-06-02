/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main file
*/

#include "torus.h"

float derivate(float x, struct s_param *p)
{
    return 4 * p->a * powf(x, 3) + 3 * p->b * powf(x, 2) + 2 * p->c * 
    x + p->d;
}