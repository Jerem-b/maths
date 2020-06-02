/*
** EPITECH PROJECT, 2019
** isdigit.c
** File description:
** isdigit.c
*/

int is_digit(char *av)
{
    int a = 0;

    for (int i = 0; av[i] != '\0'; i++) {
        if (av[i] > '0' && av[i] < '9')
            a++;
        else
            return (0);
    }
    return (1);
}
