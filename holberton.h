#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int _printf(const char *format, ...);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);

typedef struct type
{
	char type;
	void (*f)(char *, int);
} type_t;

#endif
