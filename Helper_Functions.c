#include "holberton.h"

/**
 * _strcpy - string copy function.
 * @dest: is the char 1.
 * @src: is the char 2.
 * Return: - dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - this is a string length function.
 * @s: is the interger that stores the characters.
 * Return: - integer c.
 */

int _strlen(char *s)
{
	int c;

	c = 0;

	for (; *s != 0; s++)
	{
		c++;
	}
	return (c);
}

/**
 * _strncat - this is a string concatanate function.
 * @dest: is the char 1.
 * @src: is the char 2.
 * @n: is the integer.
 * Return: - dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int c;
	int i;

	for (c = 0; dest[c]; c++)
	{
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[c + i] = src[i];
	}
	dest[c + i] = '\0';

	return (dest);
}

/**
 * _strncpy - this is a string copy functions.
 * @dest: is the char 1.
 * @src: is the char 2.
 * @n: is the integer.
 * Return: - dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

/**
 * _strcmp - function for comparing two strings.
 * @s1: is the char 1.
 * @s2: is the char 2.
 * Return: - character string 1  minus character string 2.
 */

int _strcmp(char *s1, char *s2)
{
	for ( ; *s1; )
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
