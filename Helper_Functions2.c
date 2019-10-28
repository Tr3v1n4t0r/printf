#include "holberton.h"

/**
 * _putchar - writes the character c to stdout.
 * @c: The character to print.
 * Return: on success 1.
 * 0n error, -1  is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * *_strchr - function to count the character..
 * @s: is the string 1.
 * @c: is the string 2.
 * Return: - s and counter.
 */
char *_strchr(char *s, char c)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		if (s[counter] == c)
		{
			return (s + counter);
		}
	}
	if (s[counter] == c)
	{
		return (s + counter);
	}
	return ('\0');
}

/**
 * _power - functions to multiple base to the power.
 * @base: is the base number going into it.
 * @exponent: the exponent for the base power number.
 * Return: - this returns the result.
 */

int _power(int base, int exponent)
{
	int result = 1;

	for (exponent; exponent > 0; exponent--)
	{
		result = result * base;
	}
	return (result);
}

/**
 * _len - functions for counting integers.
 * @num: is the number passing through.
 * Return:- this will return count.
 */
int _len(int num)
{
	int count;

	for (count = 0; num > 0; count++)
	{
		num /= 10;
	}
	return (count);
}
