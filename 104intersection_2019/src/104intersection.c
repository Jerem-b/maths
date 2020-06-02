/*
** EPITECH PROJECT, 2019
** 104intersection
** File description:
** display intersections coordinates
*/

#include "../include/104intersection.h"

int main(int argc, char **argv)
{
    struct s_ray params;

    if (argv[1][1] == 'h') {
        help();
        return 0;
    }
    if (error_handling(argc, argv) == 84)
        return 84;
    else {
        init_struct(argv, &params);
        choice(argv, params);
        return 0;
    }
}
