#include "main.h"

/**
* _strchr - a function that locates a character in a string.
* @c: character to be returned
* @s: string to be used
* Return: pointer to that character in string
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
