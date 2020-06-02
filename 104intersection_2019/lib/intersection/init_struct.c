/*
** EPITECH PROJECT, 2019
** 104intersection's function
** File description:
** 104intersection's function
*/

#include "104intersection.h"

void init_struct(char **argv, t_ray *params)
{
    params->p_x = atof(argv[2]);
    params->p_y = atof(argv[3]);
    params->p_z = atof(argv[4]);
    params->v_x = atof(argv[5]);
    params->v_y = atof(argv[6]);
    params->v_z = atof(argv[7]);
    params->p = atof(argv[8]);
}