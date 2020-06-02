/*
** EPITECH PROJECT, 2019
** 107transfer_2019
** File description:
** transfer.h
*/
#ifndef _H_
#define _H_
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <string.h>
typedef struct s_math
{
    char **args;
    int amnt_args;
} t_math;
int error_handling(int ac, char **av);
void get_args(int ac, char **av, struct s_math *args);
void calc(struct s_math *args);
double horner_method(double x, char *str);
#endif