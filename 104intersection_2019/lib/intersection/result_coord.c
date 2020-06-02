/*
** EPITECH PROJECT, 2019
** 104intersection's function
** File description:
** 104intersection's function
*/

#include "104intersection.h"

void result_coord(t_ray *params, int i)
{
    if (i >= 1){
        params->a_x = params->p_x + params->intersection_a * params->v_x;
        params->a_y = params->p_y + params->intersection_a * params->v_y;
        params->a_z = params->p_z + params->intersection_a * params->v_z;
    }
    if (i == 2) {
        params->b_x = params->p_x + params->intersection_b * params->v_x;
        params->b_y = params->p_y + params->intersection_b * params->v_y;
        params->b_z = params->p_z + params->intersection_b * params->v_z;
    }
}
