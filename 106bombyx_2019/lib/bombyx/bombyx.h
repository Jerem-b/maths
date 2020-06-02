/*
** EPITECH PROJECT, 2019
** 106bombyx_2019
** File description:
** bombyx.h
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
typedef struct s_data
{
    float n;
    float k;
    float i0;
    float i1;
    float xn;
    float xn_1;
} t_data;
void fill_struct(int ac, char **av, struct s_data *stct_data);
void calc(int ac, struct s_data *stct_data);
int help(void);
int error_handling(int ac, char **av);