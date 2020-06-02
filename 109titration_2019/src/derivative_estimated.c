/*
** EPITECH PROJECT, 2019
** 109titration
** File description:
** derivative_estimated.c
*/

#include "titration.h"

void derivative_estimated(struct s_math *m)
{
    float numerator = 0;
    float denom = 0;
    float max = 0;
    int pos = 0;
    float yb = m->ph_min;
    float xb = m->equivalence_derivative_sec;
    float ya = m->ph_max;
    float xa = m->maximum;

    m->derivative_est = malloc(sizeof(float) * 3000);
    for(float i=m->equivalence_derivative_sec; i <= m->maximum+0.1; i += 0.1) {
        m->derivative_est[pos] = ya + (i - xa)*((yb-ya)/(xb-xa));
        if (i >= m->equivalence_derivative_sec + 0.1) {
            if (m->derivative_est[pos-1]>0 && m->derivative_est[pos]<0)
                m->equivalence_point = i;
            if (m->derivative_est[pos-1]<0 && m->derivative_est[pos]>0)
                m->equivalence_point = i;
        }
        pos++;
    }
}