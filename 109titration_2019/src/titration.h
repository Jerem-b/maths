/*
** EPITECH PROJECT, 2019
** 109titration
** File description:
** titration.h
*/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

typedef struct s_math
{
    float *volume;
    float *ph;
    float *derivative;
    float *derivative_sec;
    float *derivative_est;
    float equivalence_derivative;
    float equivalence_derivative_sec;
    float equivalence_point;
    int amnt_data;
    float maximum;
    float ph_min;
    float ph_max;
} t_math;

int help(void);
int error_handling(int ac, char** av);
void getting_values(char **av, struct s_math *math);
void my_free(struct s_math *math);
void derivative(struct s_math *math);
void derivative_sec(struct s_math *math);
void display(struct s_math *math);
void derivative_estimated(struct s_math *math);