/*
** EPITECH PROJECT, 2019
** new_matrix
** File description:
** new_matrix functions 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "architect.h"

void swap_matrix(float *final_matrix, float *matrix)
{
    int i = 0;

    while (i != 9) {
        final_matrix[i] = matrix[i];
        i++;
    }
}

void new_matrix_t(float *matrix, float first, float scnd, int *i)
{
    float t[9] = {1, 0, first, 0, 1, scnd, 0, 0, 1};
    float new_matrix[9];

    if (*i == 3) {
        swap_matrix(matrix, t);
    } else if (*i != 3) {
        new_matrix[0] = matrix[0] * t[0] + matrix[3] * t[1] + matrix[6] * t[2];
        new_matrix[1] = matrix[1] * t[0] + matrix[4] * t[1] + matrix[7] * t[2];
        new_matrix[2] = matrix[2] * t[0] + matrix[5] * t[1] + matrix[8] * t[2];
        new_matrix[3] = matrix[0] * t[3] + matrix[3] * t[4] + matrix[6] * t[5];
        new_matrix[4] = matrix[1] * t[3] + matrix[4] * t[4] + matrix[7] * t[5];
        new_matrix[5] = matrix[2] * t[3] + matrix[5] * t[4] + matrix[8] * t[5];
        new_matrix[6] = matrix[0] * t[6] + matrix[3] * t[7] + matrix[6] * t[8];
        new_matrix[7] = matrix[1] * t[6] + matrix[4] * t[7] + matrix[7] * t[8];
        new_matrix[8] = matrix[2] * t[6] + matrix[5] * t[7] + matrix[8] * t[8];
        swap_matrix(matrix, new_matrix);
    }
}

void new_matrix_r(float *matrix, float  angle, int *i)
{
    float r[9] = {cos(angle * M_PI / 180), -sin(angle * M_PI / 180), 0,
                 sin(angle * M_PI / 180), cos(angle * M_PI / 180), 0, 0, 0, 1};
    float new_matrix[9];

    if (*i == 3) {
        swap_matrix(matrix, r);
    } else if (*i != 3){
        new_matrix[0] = matrix[0] * r[0] + matrix[3] * r[1] + matrix[6] * r[2];
        new_matrix[1] = matrix[1] * r[0] + matrix[4] * r[1] + matrix[7] * r[2];
        new_matrix[2] = matrix[2] * r[0] + matrix[5] * r[1] + matrix[8] * r[2];
        new_matrix[3] = matrix[0] * r[3] + matrix[3] * r[4] + matrix[6] * r[5];
        new_matrix[4] = matrix[1] * r[3] + matrix[4] * r[4] + matrix[7] * r[5];
        new_matrix[5] = matrix[2] * r[3] + matrix[5] * r[4] + matrix[8] * r[5];
        new_matrix[6] = matrix[0] * r[6] + matrix[3] * r[7] + matrix[6] * r[8];
        new_matrix[7] = matrix[1] * r[6] + matrix[4] * r[7] + matrix[7] * r[8];
        new_matrix[8] = matrix[2] * r[6] + matrix[5] * r[7] + matrix[8] * r[8];
        swap_matrix(matrix, new_matrix);
    }
}

void new_matrix_z(float *matrix, float first, float scnd, int *i)
{
    float z[9] = {first, 0, 0, 0, scnd, 0, 0, 0, 1};
    float new_matrix[9];

    if (*i == 3) {
        swap_matrix(matrix, z);
    } else if (*i != 3) {
        new_matrix[0] = matrix[0] * z[0] + matrix[3] * z[1] + matrix[6] * z[2];
        new_matrix[1] = matrix[1] * z[0] + matrix[4] * z[1] + matrix[7] * z[2];
        new_matrix[2] = matrix[2] * z[0] + matrix[5] * z[1] + matrix[8] * z[2];
        new_matrix[3] = matrix[0] * z[3] + matrix[3] * z[4] + matrix[6] * z[5];
        new_matrix[4] = matrix[1] * z[3] + matrix[4] * z[4] + matrix[7] * z[5];
        new_matrix[5] = matrix[2] * z[3] + matrix[5] * z[4] + matrix[8] * z[5];
        new_matrix[6] = matrix[0] * z[6] + matrix[3] * z[7] + matrix[6] * z[8];
        new_matrix[7] = matrix[1] * z[6] + matrix[4] * z[7] + matrix[7] * z[8];
        new_matrix[8] = matrix[2] * z[6] + matrix[5] * z[7] + matrix[8] * z[8];
        swap_matrix(matrix, new_matrix);
    }
}

void new_matrix_s(float *matrix, float  angle, int *i)
{
    float s[9] = {cos(2 * (angle * M_PI / 180)), sin(2 * (angle * M_PI / 180)),
                 0, sin(2 * (angle * M_PI / 180)), cos(2 * (angle * M_PI / 180))
                 * -1, 0, 0, 0, 1};
    float new_matrix[9];

    if (*i == 3) {
        swap_matrix(matrix, s);
    } else if (*i != 3){
        new_matrix[0] = matrix[0] * s[0] + matrix[3] * s[1] + matrix[6] * s[2];
        new_matrix[1] = matrix[1] * s[0] + matrix[4] * s[1] + matrix[7] * s[2];
        new_matrix[2] = matrix[2] * s[0] + matrix[5] * s[1] + matrix[8] * s[2];
        new_matrix[3] = matrix[0] * s[3] + matrix[3] * s[4] + matrix[6] * s[5];
        new_matrix[4] = matrix[1] * s[3] + matrix[4] * s[4] + matrix[7] * s[5];
        new_matrix[5] = matrix[2] * s[3] + matrix[5] * s[4] + matrix[8] * s[5];
        new_matrix[6] = matrix[0] * s[6] + matrix[3] * s[7] + matrix[6] * s[8];
        new_matrix[7] = matrix[1] * s[6] + matrix[4] * s[7] + matrix[7] * s[8];
        new_matrix[8] = matrix[2] * s[6] + matrix[5] * s[7] + matrix[8] * s[8];
        swap_matrix(matrix, new_matrix);
    }
}