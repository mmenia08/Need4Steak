/*
** EPITECH PROJECT, 2021
** n4s
** File description:
** utis
*/

#include "stuff.h"

int size_tab(char **tab)
{
    int size = 0;

    while (tab[size] != NULL) {
        size++;
    }
    return size;
}

int count_w(char *info)
{
    int nb = 0;

    for (int i = 0; info[i] != '\0'; i++) {
        if (info[i] == ':') {
            nb += 1;
        }
    }
    return nb;
}