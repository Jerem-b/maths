/*
** EPITECH PROJECT, 2019
** architect
** File description:
** architect header 
*/
#ifndef _MY_ARCHITECT_
#define _MY_ARCHITECT_
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "struct.h"

void translation(char **av, char *first, char *scnd, struct coordinates *coord);
void rotation(char **av, char *angle, struct coordinates *coord);
void scaling(char **av, char *first, char *scnd, struct coordinates *coord);
void reflection(char **av, char *angle, struct coordinates *coord);
void swap_matrix(float *final_matrix, float *matrix);
void new_matrix_t(float *matrix, float first, float scnd, int *i);
void new_matrix_r(float *matrix, float  angle, int *i);
void new_matrix_z(float *matrix, float first, float scnd, int *i);
void new_matrix_s(float *matrix, float  angle, int *i);
#endif