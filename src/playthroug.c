/*
** EPITECH PROJECT, 2021
** n4s
** File description:
** stuff
*/

#include "stuff.h"

void start(void)
{
    char *value = NULL;
    int mdr = 0;
    size_t size = 0;

    printf("START_SIMULATION\n");
    mdr = getline(&value, &size, stdin);
    if (mdr == -1 || value[0] != '1')
        exit(84);
}

void run(void)
{
    printf("GET_INFO_LIDAR\n");
    for (char **return_value = trasform_info(take_info()); 1;
        return_value = trasform_info(take_info())) {
        if (size_tab(return_value) == 36)
            turn(return_value);
        printf("GET_INFO_LIDAR\n");
    }
}
