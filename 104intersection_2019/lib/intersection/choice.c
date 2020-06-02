/*
** EPITECH PROJECT, 2019
** 104intersection's function
** File description:
** 104intersection's function
*/

#include "104intersection.h"

void choice(char **av, t_ray params)
{
    switch (av[1][0])
    {
    case '1':
        printf("Sphere of radius %1.f\n", params.p);
        sphere(&params);
        break;
    case '2':
        printf("Cylinder of radius %1.f\n", params.p);
        cylindre(&params);
        break;
    case '3':
        params.p = params.p * 3.14159265359 / 180;
        printf("Cone with a %1.f degree angle\n", params.p);
        cone(&params);
        break;
    }
}
