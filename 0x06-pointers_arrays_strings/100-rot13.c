#include <stdio.h>
#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @f: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *f)
{
	int count = 0, i;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(f + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alphabet[i])
			{
				*(f + count) = rot13[i];
				break;
			}
		}
		count++;
	}
	return (f);
}
