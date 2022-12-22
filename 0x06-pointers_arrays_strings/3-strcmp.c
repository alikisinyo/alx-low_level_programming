#include <stdio.h>
#include "main.h"

/**
*_strcmp - a function that compares two strings.
* @s1: first string to compare.
* @s2: second string to be compared with.
* Return: Value less than 0 if string is less than the other
* Value greater than 0 if string is greater then the other
* 0 sucess Always
*/

int _strcmp(char *s1, char *s2)
{
	int counter, comVal;

	counter = 0;

	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	comVal = s1[counter] - s2[counter];
	return (comVal);
}
