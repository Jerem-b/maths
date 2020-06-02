/*
** EPITECH PROJECT, 2019
** 109titration
** File description:
** derivative_sec.c
*/

#include "titration.h"

void derivative_sec(struct s_math *m)
{
    float numerator = 0;
    float denom = 0;
    float max = 0;
    int pos = 0;

    m->derivative_sec = malloc(sizeof(float) * (m->amnt_data + 1));
    for (int i = 0; i < m->amnt_data - 4; i++) {
        numerator = ((m->derivative[i+1] - m->derivative[i])/(m->volume[i+2] -
        m->volume[i+1]) * (m->volume[i+3] - m->volume[i+2]) +
        (m->derivative[i+2] - m->derivative[i+1])/(m->volume[i+3] -
        m->volume[i+2]) * (m->volume[i+2] - m->volume[i+1]));
        denom = m->volume[i+3] - m->volume[i+1];
        m->derivative_sec[i] = numerator/denom;
        if (m->derivative_sec[i] > max) {
            max = m->derivative_sec[i];
            pos = i;
        }
    }
    m->ph_min = m->derivative_sec[pos + 1];
    m->equivalence_derivative_sec = m->volume[pos + 3];
}