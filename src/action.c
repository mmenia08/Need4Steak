/*
** EPITECH PROJECT, 2020
** n4s
** File description:
** a programme to take action
*/

#include "stuff.h"

char *take_info(void)
{
    char *val = NULL;
    size_t size = 0;
    int rep = getline(&val, &size, stdin);

    if (rep == -1)
        exit(84);
    val[rep - 1] = '\0';
    return val;
}

void turn(char **data)
{
    char *temp = NULL;
    size_t s = 0;
    float t = atof(data[16]);
    float l = atof(data[4]);
    float r = atof(data[34]);

    printf("CAR_FORWARD:%2f\n", speed(t));
    getline(&temp, &s, stdin);
    printf("WHEELS_DIR:%4f\n", orient(t, l, r));
    getline(&temp, &s, stdin);
}