#include "holberton.h"

/**
 *_printf - Produces an output according to a format
 *
 *@format: character string
 *
 *Return: 0 for success else 1
 */
int _printf(const char *format, ...)
{
	va_list	valist;
	unsigned int a = 0, i;

	while (format)
	{va_start(valist, format);
		for (i = 0; format[i]; i++)
		{
			if (format[i] == '%')
			{i++;
				switch (format[i])
				{
				case 'c':
					a += type_c(va_arg(valist, int));
					break;
				case 's':
					a += type_s(va_arg(valist, char *));
					a--;
					break;
				case '%':
					a++;
					_putchar('%');
					break;
				case 'd':
				case 'i':
					a += type_i(va_arg(valist, int));
					break;
				default:
					a += 2;
					_putchar(format[i - 1]);
					_putchar(format[i]);
					break; }}
			else
			{a++;
				_putchar(format[i]); }
		} va_end(valist);
		break;
	} return (a); }
