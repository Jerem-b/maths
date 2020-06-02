/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main file
*/

#include "torus.h"

float f(float x, struct s_param *p)
{
    return p->a * powf(x, 4) + p->b * powf(x, 3) + p->c * powf(x, 2) + 
    p->d * x + p->e;
}