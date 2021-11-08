#include "main.h"
#include <stdlib.h>
#include <unistd.h>


/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: null if fails, other pointer to the array
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i = 0, j = 0, k = 0, count = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	k = j + i;
	s = (char *)malloc(k + 1);

	if (s == NULL)
		return (NULL);

	for (count = 0; count < i; count++)
		s[count] = s1[count];
	for (count = i, j = 0; count < k; count++, j++)
		s[count] = s2[j];

	return (s);
	free(s);
}

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string
 *
 * Return: len of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 *_strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: value of comparation.
 */

int _strcmp(char *s1, char *s2)
{
	int i, x = 0, z, l1 = 0, l2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
		l1++;
	for (i = 0; s2[i] != '\0'; i++)
		l2++;
	if (l1 >= l2)
		z = l1;
	else
		z = l2;
	for (i = 0; i < z; i++)
	{
		x = s1[i] - s2[i];
		if (x != 0)
			i = z;
	}
	return (x);
}


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
