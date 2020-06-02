/*
** EPITECH PROJECT, 2019
** 104intersection's function
** File description:
** 104intersection's function
*/

#include "104intersection.h"

void help(void)
{
    int fd = open("help.txt", O_RDONLY);
    char buffer[438];
    read(fd, buffer, 438);
    write(1, buffer, 438);
}
