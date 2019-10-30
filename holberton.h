#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _power(int base, int exponent);
int _len(int num);
int type_c(char);
int type_s(char *);
int type_i(int);
char *rev_string(char *, int, int);
char *_itoa(unsigned int, char *, int);

#endif
