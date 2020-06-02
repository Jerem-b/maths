/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main file
*/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_param
{
    int option;
    float a;
    float b;
    float c;
    float d;
    float e;
    int n;
    float x_n;
} t_param;

void fill_struct(int ac, char **av, struct s_param *p)
{
    p->option = atoi(av[1]);
    p->a = atof(av[2]);
    p->b = atof(av[3]);
    p->c = atof(av[4]);
    p->d = atof(av[5]);
    p->e = atof(av[6]);
    p->n = atoi(av[7]);
}

float f(float x, struct s_param *p)
{
    return p->a * powf(x, 4) + p->b * powf(x, 3) + p->c * powf(x, 2) + 
    p->d * x + p->e;
}

float derivate(float x, struct s_param *p)
{
    return 4 * p->a * powf(x, 3) + 3 * p->b * powf(x, 2) + 2 * p->c * 
    x + p->d;
}

void remove_zero(char *str, int precision)
{
    char result[precision + 10];
    int k = 0;
    int count;

    for (; str[k] != '.'; k++) {
        result[k] = str[k];
    }
    for (count = k; count <= precision + k; count++) {
        if (str[count] == '0' && str[count + 1] == '0')
            break;
        result[count] = str[count];
    }
    result[count] = '\0';
    printf("result : %s\n", result);
}

void bissection_method(struct s_param *p)
{
    float an = 0;
    float bn = 1;
    float mid_n;

    while (1) {
        mid_n = (an + bn)/2;
        if (f(mid_n, p) == 0) {
            printf("x = %.*f\n", p->n, mid_n);
            break;
        }
        if (f(an, p) * f(mid_n, p) < 0) {
            an = an;
            bn = mid_n;
        }
        if (f(bn, p) * f(mid_n, p) < 0) {
            an = mid_n;
            bn = bn;
        }
        printf("x = %.*f\n", p->n, mid_n);
    }
}

void newton_method(struct s_param *p)
{
    float x_n_plus_1;

    printf("x = %.*f\n", p->n, 0.25);
    p->x_n = f(0.5, p);
    while (1) {
        x_n_plus_1 = p->x_n - (f(p->x_n, p) / derivate(p->x_n, p));
        if (x_n_plus_1 == p->x_n)
            break;
        printf("x = %.*f\n", p->n, p->x_n);
        p->x_n = x_n_plus_1;
    }
}

void secant_method(struct s_param *p)
{
    float x_n_plus_1;
    float x_n_minus_1 = 0;

    printf("x = %.*f\n", p->n, 0.25);
    p->x_n = f(1, p);
    while (1) {
        x_n_plus_1 = p->x_n - (f(p->x_n, p)/((f(p->x_n, p) - f(x_n_minus_1, p))
        /(p->x_n - x_n_minus_1)));
        if (p->x_n == x_n_plus_1)
            break;
        printf("x = %.*f\n", p->n, x_n_plus_1);
        x_n_minus_1 = p->x_n;
        p->x_n = x_n_plus_1;
    }
}

int main (int ac, char **av)
{
    struct s_param *p = malloc(sizeof(struct s_param) + 1);
    fill_struct(ac, av, p);
    switch(p->option) {
    case 1:
        bissection_method(p);
        break;
    case 2:
        newton_method(p);
        break;
    case 3:
        secant_method(p);
        break;
    }
}
