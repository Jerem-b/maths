/*
** EPITECH PROJECT, 2019
** display_help.c
** File description:
** 103cipher manual
*/
#include "103cipher.h"

void display_help(void)
{
    printf("USAGE\n    ./103cipher message key flag\n\nDESCRIPTION\n");
    printf("    message     a message, made of ASCII characters\n    key");
    printf("         the encryption key, made of ASCII characters\n    ");
    printf("flag\t0 for the message to be encrypted, 1 to be decrypted\n");
}
