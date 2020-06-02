/*
** EPITECH PROJECT, 2019
** 104intersection's function
** File description:
** 104intersection's function
*/

#ifndef _INTER_
#define _INTER_
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

typedef struct s_ray
{
    float p_x;
    float p_y;
    float p_z;
    float v_x;
    float v_y;
    float v_z;
    float p;
    float intersection_a;
    float intersection_b;
    float a_x;
    float a_y;
    float a_z;
    float b_x;
    float b_y;
    float b_z;
}t_ray;
void cone(t_ray *r);
void init_struct(char **argv, t_ray *params);
void result_coord(t_ray *params, int i);
void display_result(int i, t_ray *params);
void sphere(t_ray *r);
int my_strlen(char const *str);
int error_handling(int ac, char **av);
void help(void);
void cylinder(t_ray *params);
void choice(char **av, t_ray params);
#endif
