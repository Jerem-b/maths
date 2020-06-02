/*
** EPITECH PROJECT, 2020
** 104intersection's function
** File description:
** search intersection with a cone
*/

#include "104intersection.h"

void cone(t_ray *r)
{
    float a = powf(r->v_x, 2.0) + powf(r->v_y, 2.0) - powf(r->v_z, 2.0) * powf(tanf(r->p), 2.0);
    float b = 2 * (r->v_x * r->p_x) + 2 * (r->v_y * r->p_y)
        - 2 * (r->v_z * r->p_z) * powf(tanf(r->p), 2.0);
    float c = powf(r->p_x, 2.0) + powf(r->p_y, 2.0) -
        powf(r->p_z, 2.0) * powf(tanf(r->p), 2.0);

    if(b * b - 4 * a * c < 0 ) {
        display_result(0, r);
    } else if (b * b - 4 * a * c == 0) {
        r->intersection_a = - b / (2 * a);
        result_coord(r, 1);
        display_result(1, r);
    } else if (b * b - 4 * a * c > 0) {
        r->intersection_a = (-b - sqrtf(b * b - 4 * a * c)) / (2 * a);
        r->intersection_b = (-b + sqrtf(b * b - 4 * a * c)) / (2 * a);
        result_coord(r, 2);
        display_result(2, r);
    }
}
