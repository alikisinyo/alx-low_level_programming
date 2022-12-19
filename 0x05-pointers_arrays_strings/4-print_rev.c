#include <stdio.h>
#include "main.h"

/**
* print_rev - a function that prints a string, in reverse, followed by a new line. 
* @s: string to be manipulated
* Return: 0
*/
void print_rev(char *s)
{
	int i = 0;

	int j;

	while (s[i] != '\0')

	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
