#include "main.h"

/**
* _strspn - return length of string that matches values consistently
* @s: string to search
* @accept: target matches
* Return: number of bytes consecutively matched
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, x;
	int matches = 0;

	while (s[i] != '\0') /*iterate through string*/
	{

		for (x = 0; accept[x] != '\0'; x++) /*iterate through target*/
		{
			if (s[i] == accept[x]) /*record & break at first match*/
			{
				matches++;
				break;
			}

			if (accept[x + 1] == '\0' && s[i] != accept[x])

			return (matches);/*return if idx doesn't match*/
		}
		i++;
	}
	return (matches); /* return num if all match till end */
}
