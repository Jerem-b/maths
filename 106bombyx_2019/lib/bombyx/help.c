/*
** EPITECH PROJECT, 2019
** 106bombyx_2019
** File description:
** help.c
*/

#include "bombyx.h"

int help(void)
{
    printf("USAGE\n\t   ./106bombyx n [k | i0 i1]\n\nDESCRIPTION\n\t   n\t");
    printf("number of first generation individuals\n\t   k\tgrowth rate from");
    printf(" 1 to 4\n\t   i0\tinitial generation (included)\n\t   i1\tfinal");
    printf(" generation (included)\n");
    exit(0);
}