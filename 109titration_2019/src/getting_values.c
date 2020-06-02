/*
** EPITECH PROJECT, 2019
** 109titration
** File description:
** getting_values.c
*/

#include "titration.h"


void extract_volume(char *str, float *dest)
{
    static int pos = 0;
    dest[pos] = atof(str);
    pos++;
}

void extract_ph(char *str, float *dest)
{
    static int pos = 0;
    dest[pos] = atof(str);
    pos++;
}

int fill_volume(char *tmp, struct s_math *math, char *buffer, int i)
{
    int count = 0;

    for (; buffer[i] != '\0' && buffer[i] != ';'; i++, count++)
        tmp[count] = buffer[i];
    tmp[count] = '\0';
    extract_volume(tmp, math->volume);
    free(tmp);
    return i;
}

int fill_ph(char *tmp, struct s_math *math, char *buffer, int i)
{
    int count = 0;

    for (; buffer[i] != '\0' && buffer[i] != '\n'; i++, count++)
        tmp[count] = buffer[i];
    i++;
    tmp[count] = '\0';
    extract_ph(tmp, math->ph);
    free(tmp);
    return i;
}

void getting_values(char **av, struct s_math *math)
{
    char *buffer = malloc(sizeof(char) * 3001);
    size_t size = 3000;
    int fd = open(av[1], O_RDONLY);
    int i = 0;
    char *tmp = malloc(sizeof(char) * 1001);

    math->amnt_data = 0;
    math->volume = malloc(sizeof(float) * 3001);
    math->ph = malloc(sizeof(float) * 3001);
    read(fd, buffer, size);
    while (buffer[i] != '\0') {
        math->amnt_data += 1;
        i = fill_volume(tmp, math, buffer, i);
        tmp = malloc(sizeof(char) * 3001);
        i++;
        i = fill_ph(tmp, math, buffer, i);
        tmp = malloc(sizeof(char) * 3001);
    }
    close(fd);
    free(buffer);
    free(tmp);
}