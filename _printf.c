#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _printf - function tha emules printf of standar librery
 * @format: string with info for  the function
 * Return: the number of chrs printed
 */

int _printf(const char *format, ...)
{
	if (format != NULL)
	{
		int cuenta = 0, i;
		int (*a)(va_list);
		va_list args;

		va_start(args, format);
		i = 0;
		if (format[0] == '%' && format[1] == '\0')
			return (-1);
		while (format != NULL && format[i] != '\0')
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					cuenta += _putchar(format[i]);
					i += 2;
				}
				else
				{
					a = get_func(format[i + 1]);
					if (a)
						cuenta += a(args);
					else
						cuenta = _putchar(format[i]) +
							_putchar(format[i + 1]);
					i += 2;
				}
			}
			else
			{
				cuenta += _putchar(format[i]);
				i++;
			}
		}
		va_end(args);
		return (cuenta);
	}
	return (-1);
}
