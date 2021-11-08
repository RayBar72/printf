#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * imprime_c - prints character
 * @args: character argument
 * Return: number of characters
 */
int imprime_c(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (_putchar(c));
}
/**
 * imprime_s - prints a string
 * @args: string  argument
 * Return: number of characters
 */
int imprime_s(va_list args)
{
	int i, cuenta = 0;
	char *a;

	i = 0;
	a = va_arg(args, char*);
	if (!a)
		a = "(null)";
	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
		cuenta++;
	}
	return (cuenta);
}
/**
 * imprime_porcent - pass the percent sing
 * @args: string  argument
 * Return: return the percent sing
 *
 */
int imprime_porcent(va_list args)
{
	char *a;

	a = "%";
	if (va_arg(args, int) == *a)
	{
		return (*a);
	}
	return (*a);
}

/**
 * imprime_d - prints a decimal
 * @args: decimal argument
 * Return: counter
 */
int imprime_d(va_list args)
{

	unsigned int abs, aux, num, cuenta;
	int n;

	cuenta = 0;
	n = va_arg(args, int);
	if (n < 0)
	{
		abs = (n * -1);
		cuenta += _putchar('-');
	}
	else
		abs = n;

	aux = abs;
	num = 1;
	while (aux > 9)
	{
		aux /= 10;
		num *= 10;
	}
	while (num >= 1)
	{
		cuenta += _putchar(((abs / num) % 10) + '0');
		num /= 10;
	}
	return (cuenta);
}
/**
 * imprime_i - prints integer
 * @args: integer argument
 * Return: the decimal function
 */

int imprime_i(va_list args)
{
	return (imprime_d(args));
}
