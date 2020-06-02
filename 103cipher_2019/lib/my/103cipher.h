/*
** EPITECH PROJECT, 2019
** 103cipher
** File description:
** include cipherlib
*/

#ifndef _CIPHER_
#define _CIPHER_
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void display_help(void);
int error_handling(int, char **);
int *coded_message(int *, int *, int, int);
int *message_matrix(char **, int *);
int *coding_matrix(char **av, int *size);
int matrix_size(char *);
#endif
