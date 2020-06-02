/*
** EPITECH PROJECT, 2019
** torus.h
** File description:
** torus header file
*/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_param
{
    int option;
    float a;
    float b;
    float c;
    float d;
    float e;
    int n;
    float x_n;
} t_param;
void fill_struct(int ac, char **av, struct s_param *p);
float f(float x, struct s_param *p);
float derivate(float x, struct s_param *p);
void bissection_method(struct s_param *p);
void newton_method(struct s_param *p);
void secant_method(struct s_param *p);