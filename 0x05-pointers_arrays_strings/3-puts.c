#include <stdio.h>
#include "main.h"

/**
* _puts - function that prints a string, followed by a new line, to stdout.
* @str : pointer to the str to be evaluated
* Return : 0
*/

void _puts(char *str)
{
	int r = 0;

	while (str[r])
	{
		_putchar(str[r]);
		r++;
	}
	_putchar('\n');
}
