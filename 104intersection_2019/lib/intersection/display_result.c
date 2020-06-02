/*
** EPITECH PROJECT, 2019
** 104intersection's function
** File description:
** 104intersection's function
*/

#include "104intersection.h"

void display_result(int i, t_ray *params)
{
    printf("Line passing through the point (%1.f, %1.f, %1.f) ", params->p_x, 
    params->p_y, params->p_z);
    printf("and parallel to the vector (%1.f, %1.f, %1.f)\n", params->v_x, 
    params->v_y, params->v_z);
    switch (i) {
    case 0:
        printf("No intersection point.\n");
        break;
    case 1:
        printf("1 intersection point:\n");
        printf("(%.3f, %.3f, %.3f)\n", params->a_x, params->a_y, params->a_z);
        break;
    case 2:
        printf("2 intersection point:\n");
        printf("(%.3f, %.3f, %.3f)\n", params->b_x, params->b_y, params->b_z);
        printf("(%.3f, %.3f, %.3f)\n", params->a_x, params->a_y, params->a_z);
        break;
    }
}
