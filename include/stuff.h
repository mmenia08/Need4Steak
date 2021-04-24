/*
** EPITECH PROJECT, 2021
** stuff.h
** File description:
** a header file to use stuf
*/

#ifndef STUFF_H_
#define STUFF_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int size_tab(char **tab);
char *take_info(void);
void turn(char **data);
float speed(int sens);
char **trasform_info(char *info);
float orient(int sens, int l, int r);
void start(void);
void run(void);
int size_tab(char **tab);
int count_w(char *info);

#endif /* !STUFF_H_ */