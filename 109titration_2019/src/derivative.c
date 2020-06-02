/*
** EPITECH PROJECT, 2019
** 109titration
** File description:
** derivate.c
*/

#include "titration.h"

void derivative(struct s_math *m)
{
    float numerator = 0;
    float denom = 0;
    float max = 0;
    int pos = 0;

    m->derivative = malloc(sizeof(float) * (m->amnt_data + 1));
    for (int i = 0; i < m->amnt_data - 2; i++) {
        numerator = ((m->ph[i+1] - m->ph[i])/(m->volume[i+1] - m->volume[i]) *
        (m->volume[i+2] - m->volume[i+1]) + (m->ph[i+2] - m->ph[i+1])/
        (m->volume[i+2] - m->volume[i+1]) * (m->volume[i+1] - m->volume[i]));
        denom = m->volume[i+2] - m->volume[i];
        m->derivative[i] = numerator/denom;
        if (m->derivative[i] > max) {
            max = m->derivative[i];
            pos = i;
        }
    }
    m->equivalence_derivative = m->volume[pos + 1];
}