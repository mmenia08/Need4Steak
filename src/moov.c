/*
** EPITECH PROJECT, 2020
** n4s
** File description:
** mmoooov
*/

#include "stuff.h"

float speed(int sens)
{
    float speed = 0.1;

    if (sens >= 250)
        speed = 0.2;
    if (sens >= 350)
        speed = 0.3;
    if (sens >= 450)
        speed = 0.4;
    if (sens >= 650)
        speed = 0.5;
    if (sens >= 850)
        speed = 0.7;
    if (sens >= 1050)
        speed = 0.8;
    if (sens >= 2050)
        speed = 0.9;
    if (sens >= 2500)
        speed = 1.0;
    return speed;
}

float orient(int sens, int l, int r)
{
    float dd = 0.5;

    if (sens >= 600)
        dd = 0.3;
    if (sens >= 400)
        dd = 0.2;
    if (sens >= 600)
        dd = 0.1;
    if (sens >= 1000)
        dd = 0.05;
    if (sens >= 1500)
        dd = 0.005;
    return (l - r >= 0.0) ? dd : -dd;
}