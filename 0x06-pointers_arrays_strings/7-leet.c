#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337
 * @w: input string.
 * Return: the pointer dest.
 */

char *leet(char *w)
{
	int count = 0, i;

	int lower_case[] = {97, 101, 111, 116, 108};

	int upper_case[] = {65, 69, 79, 84, 76};

	int numbers[] = {52, 51, 48, 55, 49};


	while (*(w + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(w + count) == lower_case[i] || *(w + count) == upper_case[i])
			{
				*(w + count) = numbers[i];
				break;
			}
		}
		count++;
	}
	return (f);
}
