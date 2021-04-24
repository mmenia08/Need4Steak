/*
** EPITECH PROJECT, 2020
** n4s
** File description:
** a programme to comunicate withe cps
*/

#include "stuff.h"

int posotion(char *info, int where)
{
    int pos = 0;

    for (int i = 0; i != where; pos++)
        if (info[pos] == ':')
            i += 1;
    return pos;
}

char *getit(char *info, int size, int pos)
{
    char *result = malloc(sizeof(char) * (size + 1));
    int y = 0;

    result[size] = '\0';
    while (info[pos] != ':' && info[pos] != '\0') {
        result[y] = info[pos];
        pos++;
        y++;
    }
    return result;
}

char *fetch(char *info, int pos)
{
    int size = 0;
    char *str = NULL;
    int y = pos;

    while (info[y] != ':' && info[y] != '\0') {
        size++;
        y++;
    }
    str = getit(info, size, pos);
    return str;
}

char **trasform_info(char *info)
{
    int tab_size = count_w(info);
    char **tab = malloc(sizeof(char *) * (tab_size + 2));
    int i = 0;

    tab[tab_size + 1] = NULL;
    while (i <= tab_size) {
        tab[i] = fetch(info, posotion(info, i));
        i++;
    }
    return tab;
}