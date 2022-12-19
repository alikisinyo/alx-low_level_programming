#include <stdio.h>
#include "main.h"

/**
* _strlen - a function that returns the length of a string.
* @s: string to be tested
* Return: (0) on success
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
