/*
** EPITECH PROJECT, 2019
** 110borwein_2019
** File description:
** borwein.h
*/

#ifndef _MATH_
#define _MATH_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define PI 3.14159265358979323846

typedef struct s_mid
{
    int n;
    double result;
    double diff;
} t_mid;
typedef struct s_simp
{
    int n;
    double result;
    double diff;
} t_simp;
typedef struct s_trap
{
    int n;
    double result;
    double diff;
} t_trap;
int error_handling(int ac, char **av);
void fill_struct(struct s_mid *m,struct s_simp *s, struct s_trap *t,char **av);
void mid_method(struct s_mid *mid);
void trap_method(struct s_trap *trap);
void display(struct s_mid *mid,struct s_simp *simp, struct s_trap *trap);
double calculus(double x, int n);
void simp_method(struct s_simp *simp);
#endif