#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
int _putchar(char c);
int _power(int base, int exponent);
int _len(int num);
int type_c(char);
int type_s(char *);
int type_i(int);
char *rev_string(char *, int, int);
char* _itoa(unsigned int value, char* buffer, int base)

#endif
