/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main file
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "../include/torus.h"

void help(void)
{
    int fd = open("./src/help.txt", O_RDONLY);
    char buffer[365];
    read(fd, buffer, 365);
    write(1, buffer, 365);
}

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i += 1;
    return i;
}

int error_handling(int ac, char **av)
{
    if (ac != 8)
        return 84;
    else {
        for (int i = 1; i < ac; i++) {
            for (int j = 0; j < my_strlen(av[i]); j++) {
                if (av[i][j] == '-')
                    j++;
                if (av[i][j] < '0' || av[i][j] > '9')
                    return 84;
            }
        }
    }
    return 0;
}

int main_prog(int ac, char **av, struct s_param *p)
{
    fill_struct(ac, av, p);
    switch(p->option) {
    case 1:
        bissection_method(p);
        return 0;
        break;
    case 2:
        newton_method(p);
        return 0;
        break;
    case 3:
        secant_method(p);
        return 0;
        break;
    }
    return 84;
}

int main (int ac, char **av)
{
    struct s_param *p = malloc(sizeof(struct s_param) + 1);
    if (ac <= 1)
        return 84;
    if (av[1][0] == '-' && av[1][1] == 'h') {
        help();
        return 0;
    }
    if (error_handling(ac, av) == 84)
        return 84;
    else {
        if (main_prog(ac, av, p) == 0)
            return 0;
        else
            return 84;
    }
}
