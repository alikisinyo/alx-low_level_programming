#include <stdio.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of  a string to uppercase
 * @b: Pointer to string
 * Return: Pointer to uppercase string
 */

char *string_toupper(char *b)
{
	int length;

	length = 0;

	while (b[length] != '\0')
	{
		if (b[length] >= 97 && b[length] <= 122)
		{
			b[length] = b[length] - 32;
		}
		length++;
	}
	return (b);
}
