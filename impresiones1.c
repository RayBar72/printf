#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * imprime_b - prints a int in binary
 * @args: string  argument
 * Return: number of characters
 */

int imprime_b(va_list args)
{
	unsigned int n, cuenta;
	int i = 0;
	char a[10245];

	cuenta = 0;
	n = va_arg(args, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		cuenta++;
	}
	else
	{
		while (n > 0)
		{
			a[i] = n % 2;
			n /= 2;
			i++;
		}
		for (i--; i >= 0; i--)
		{
			_putchar(a[i] +'0');
			cuenta++;
		}
	}
	return (cuenta);
}
