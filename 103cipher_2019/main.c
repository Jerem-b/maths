/*
** EPITECH PROJECT, 2019
** main
** File description:
** main file of 103cipher
*/

#include "./include/103cipher.h"

void display(int *c_matrix, int *code, int len_mess, int len_key)
{
    int i = 0;

    printf("Key matrix:\n");
    while (i < len_key * len_key) {
        if (i % len_key == 0 && i != 0)
            printf("\n");
        if (i % len_key != len_key - 1)
            printf("%d\t", c_matrix[i]);
        else
            printf("%d", c_matrix[i]);
        i++;
    }
    printf("\n\nEncrypted message:\n");
    for (int j = 0; j <= len_mess; j++) {
        if (j < len_mess)
            printf("%d ", code[j]);
        else
            printf("%d", code[j]);
    }
    printf("\n");

}

void cipher(char **av)
{
    int size = 0;
    int *c_matrix = coding_matrix(av, &size);
    int *message = message_matrix(av, &size);
    int *code = coded_message(c_matrix, message, size, strlen(av[1])+1);
    display(c_matrix, code, strlen(av[1]), size);
    free(c_matrix);
    free(message);
    free(code);
}

int main(int ac, char **av)
{
    if (ac == 1)
        return 84;
    if (av[1][1] == 'h') {
        display_help();
        return 0;
    }
    if (error_handling(ac, av) == 84)
        return 84;

    cipher(av);
    return(0);
}
