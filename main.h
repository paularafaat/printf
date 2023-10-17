#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
int _printf(const char *format, ...);
int print_integer(int value);
void print_buffer(char buffer[], int *buff_ind);

#endif
