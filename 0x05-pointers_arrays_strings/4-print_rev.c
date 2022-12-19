#include <stdio.h>
#include "main.h"

/**
 * print_rev - This function prints a string in reverse order
 * @s: pointer parameter
 * Return: Always (0) sucess
 */
void print_rev(char *s)
{
	int i = 0;
	int t;

	while (s[i] != '\0')
	{
		i++;
	}
	for (t = i - 1; t >= 0; t--)
	{
		_putchar(s[t]);
	}
	_putchar('\n');
}
