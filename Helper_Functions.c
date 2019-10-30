#include "holberton.h"

/**
 * _itoa - function that converts integers into strings.
 * @value - unsigned int value.
 * @buffer - char.
 * @base - base.
 * Return:- rev_string.
 */

char _itoa(unsigned int value, char *buffer, int base)
{

	int i = 0;
	int r;

	while (value)
	{
		r = value % base;

		if (r >= 10)
		{
			buffer[i++] = 65 + (r - 10);
		}
		else
			buffer[i++] = 48 + r;

		value = value / base;
	}
	if (i == 0)
	{
		buffer[i++] = '0';
	}

	buffer[i] = '\0';

	return (rev_string(buffer, 0, i - 1));
}
