/*
** EPITECH PROJECT, 2019
** matrix
** File description:
** matrix main functions
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "architect.h"

void translation(char **av, char *first, char *scnd, struct coordinates *coord)
{
    char *matrix[9] = {"1", "0", first,
                       "0", "1", scnd,
                       "0", "0", "1"};
    coord->new_x = atof(matrix[0]) * coord->x + atof(matrix[1])
        * coord->y + atof(matrix[2]) * 1.00;
    coord->y = atof(matrix[3]) * coord->x + atof(matrix[4])
        * coord->y + atof(matrix[5]) * 1.00;
    coord->x = coord->new_x;
    printf("Translation along vector (%d, %d)\n", atol(first), atol(scnd));
}

void rotation(char **av, char *angle, struct coordinates *coord)
{
    char *matrix[9] = {angle, angle, "0",
                       angle, angle, "0",
                       "0", "0", "1"};
    coord->new_x = cos(atof(matrix[0]) * M_PI / 180) * coord->x +
        -sin(atof(matrix[1]) * M_PI / 180) * coord->y + atof(matrix[2])
        * 1.00;
    coord->y = sin(atof(matrix[3]) * M_PI / 180) * coord->x +
    cos(atof(matrix[4]) * M_PI / 180)
    * coord->y + atof(matrix[5]) * 1.00;
    coord->x = coord->new_x;
    printf("Rotation by a %d degree angle\n", atol(angle));
}

void scaling(char **av, char *first, char *scnd, struct coordinates *coord)
{
    char *matrix[9] = {first, "0", "0",
                        "0", scnd, "0",
                        "0", "0", "1"};
    coord->new_x = atof(matrix[0]) * coord->x + atof(matrix[1])
        * coord->y + atof(matrix[2]) * 0.00;
    coord->y = atof(matrix[3]) * coord->x + atof(matrix[4])
        * coord->y + atof(matrix[5]) * 0.00;
    coord->x = coord->new_x;
    printf("Scaling by factors %d and %d\n", atol(first), atol(scnd));
}

void reflection(char **av, char *angle, struct coordinates *coord)
{
    char *matrix[9] = {angle, angle, "0",
                        angle, angle, "0",
                        "0", "0", "1"};
    coord->new_x = cos(2 * atof(matrix[0]) * M_PI / 180) * coord->x +
        sin(2 * atof(matrix[1]) * M_PI / 180) * coord->y + atof(matrix[2])
        * 1.00;
    coord->y = sin(2 * atof(matrix[3]) * M_PI / 180) * coord->x +
    -cos(2 * atof(matrix[4]) * M_PI / 180)
    * coord->y + atof(matrix[5]) * 1.00;
    coord->x = coord->new_x;
    printf("Reflection over an axis with an inclination angle of %d degrees\n",
     atol(angle));
}
