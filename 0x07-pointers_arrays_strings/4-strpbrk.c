#include "main.h"
#define NULL 0

/**
* _strpbrk - return pointer to byte in s that matches a byte in accept
* @s: string to search
* @accept: target matches
* Return: pointer to index of string at first occurence.
*/

char *_strpbrk(char *s, char *accept)
{
	int x = 0, g;

	while (s[x] != '\0')
	{
		for (g = 0; accept[y] != '\0'; g++)
		{
			if (s[x] == accept[g])
			{
				s = &s[x];
				return (s);
			}
		}
	x++;
	}
	return (NULL);
}
