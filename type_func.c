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
	_putchar(c);

	return (1);
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
 *type_d - prints an integer in decimal
 *
 *@d: integer to print
 *
 *Return - number of characters printed
 */
int type_i(int d)
{
	int i = _len(d);

	for (; i > 0; i--)
		_putchar(d % _power(10, i));
	return (i);
}
