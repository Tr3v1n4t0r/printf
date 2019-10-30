#include "holberton.h"

/**
 * _itoa - function that converts integers into strings.
 * @value: unsigned int value.
 * @buffer: char.
 * @base: base.
 * Return: the string
 */
char *_itoa(int value, char *buffer, int base)
{
	int n = _abs(value);
	int i = 0;
	int r;

	while (n)
	{
		r = n % base;
		if (r >= 10)
			buffer[i++] = 65 + (r - 10);
		else
			buffer[i++] = 48 + r;
		n = n / base;
	}
	if (i == 0)
		buffer[i++] = '0';
	if (value < 0 && base == 10)
		buffer[i++] = '-';

	buffer[i] = '\0';

	return (rev_string(buffer, 0, i - 1));
}

unsigned int _abs(int n)
{
	int const mask = n >> (sizeof(int) * 8 - 1);
	return ((n + mask) ^ mask);
}
