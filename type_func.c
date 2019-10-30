#include "holberton.h"

/**
 *type_R - encodes and prints with rot13
 *
 *@s: string to rotate and print
 *
 *Return: number of characters printed
 */
int type_R(char *s)
{
	int i, j;
	char start[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rotate[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; start[j]; j++)
		{
			if (s[i] == start[j])
			{
				s[i] = rotate[j];
				_putchar(s[i]);
				break;
			}
		}
	}
	return (i);
}

/**
 *type_c - prints a character
 *
 *@c: character to print
 *
 *Return: number of characters printed
 */
int type_c(char c)
{
	int i = 1;

	_putchar(c);

	return (i);
}

/**
 *type_s - prints a string
 *
 *@s: string to print
 *
 *Return: number of characters printed
 */
int type_s(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		_putchar(s[i]);

	return (i);
}

/**
 *type_i - prints an integer
 *
 *@d: integer to print
 *
 *Return: number of characters printed
 */
int type_i(int d)
{
	int a;
	char *buffer;
	char *s;

	buffer = malloc(sizeof(int) * _len(d));

	s = _itoa(d, buffer, 10);

	for (a = 0; s[a]; a++)
		_putchar(s[a]);

	return (a);
}
