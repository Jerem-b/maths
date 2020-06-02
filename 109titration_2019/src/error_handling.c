/*
** EPITECH PROJECT, 2019
** 109titration
** File description:
** error_handling.c
*/

#include "titration.h"

int error_handling(int ac, char** av)
{
    char *buffer = malloc(sizeof(char) * 3001);
    int fd;

    if (ac != 2)
        exit(84);
    if ((fd = open(av[1], O_RDONLY)) == -1)
        exit(84);
    read(fd, buffer, 3000);
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i]!='-' && buffer[i]!=';' && (buffer[i]<'0' ||
        buffer[i]>'9') && buffer[i] != '\n' && buffer[i] != '.') {
            exit(84);
        }
    }
    close(fd);
    free(buffer);
}