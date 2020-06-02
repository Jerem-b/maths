/*
** EPITECH PROJECT, 2019
** rmletters.c
** File description:
** rmletters.c
*/

int rmletters(char *av)
{
    int a = 0;

    for (int i = 0; av[i] != '\0'; i++) {
        if (av[i] >= '0' && av[i] <= '9' || av[i] == '.' || av[i] == '-')
            a++;
        else
            return (0);
    }
    return (1);
}
