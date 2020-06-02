/*
** EPITECH PROJECT, 2019
** 101pong.c
** File description:
** 101pong.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "struct.h"

int is_digit(char *av);
int rmletters(char *av);
int isneg(int nb);

int aff(coord_t *coord)
{
    if (0.0 > coord->z1 * coord->vz) {
        printf("The velocity vector of the ball is:\n(%.2f, %.2f, %.2f)\n"
           , coord->vx, coord->vy, coord->vz);
        printf("At time t + %d, ball coordinates will be:\n",coord->n);
        printf("(%.2f, %.2f, %.2f)\n", coord->x1 + coord->vx * coord->n,
               fabsf(coord->y1 + coord->vy * coord->n),
           coord->z1 + coord->vz * coord->n);
        printf("The incidence angle is:\n");
        printf("%.2f degrees\n",coord->ang);
    }
    
    else {
        printf("The velocity vector of the ball is:\n(%.2f, %.2f, %.2f)\n",
               coord->vx, coord->vy, coord->vz);
        printf("At time t + %d, ball coordinates will be:\n", coord->n);
        printf("(%.2f, %.2f, %.2f)\n", coord->x1 + coord->vx * coord->n,
               fabsf(coord->y1 + fabsf(coord->vy) * coord->n),
               coord->z1 + coord->vz * coord->n);
        printf("The ball won't reach the paddle.\n");
    }
}

void pre_coordinates(int ac, char **argv, coord_t *coord)
{
    coord->pyth = coord->vx * coord->vx + coord->vy * coord->vy;
    if (coord->pyth != 0.0) {
        coord->cos_ang = coord->pyth;
        coord->cos_ang /= sqrt(coord->pyth + coord->vz * coord->vz);
        coord->cos_ang /= sqrt(coord->pyth);
    }
    coord->ang = acos(coord->cos_ang) * 180 / M_PI;
    aff(coord);
}

coord_t *get_arg(char **argv)
{
    coord_t *coord;

    coord = malloc(sizeof(coord_t));
    coord->x0 = atof(argv[1]);
    coord->y0 = atof(argv[2]);
    coord->z0 = atof(argv[3]);
    coord->x1 = atof(argv[4]);
    coord->y1 = atof(argv[5]);
    coord->z1 = atof(argv[6]);
    coord->n = atoi(argv[7]);
    coord->vx = (coord->x1 - coord->x0);
    coord->vy = (coord->y1 - coord->y0);
    coord->vz = (coord->z1 - coord->z0);
    return (coord);
}

int main(int ac, char **argv)
{
    coord_t *ptr_coord;
    if (ac != 8)
        return (84);
    if (isneg(atoi(argv[7])) == 0)
       return (84);
    for (int i = 1; i < 7; i++) {
        if (rmletters(argv[i]) == 0)
            return (84);
            }
    if (is_digit(argv[7]) == 0)
        return (84);
    ptr_coord = get_arg(argv);
    pre_coordinates(ac, argv, ptr_coord);
    free(ptr_coord);
    return (0);
}
