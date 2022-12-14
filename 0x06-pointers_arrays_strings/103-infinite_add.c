#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @x: buffer that the function will use to store the result.
 * @size_x: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *x, int size_x)

{
	int c1 = 0, c2 = 0, op, bg, dr1, dr2, add = 0;

	while (*(n1 + c1) != '\0')
		c1++;
	while (*(n2 + c2) != '\0')
		c2++;
	if (c1 >= c2)
		bg = c1;
	else
		bg = c2;
	if (size_x <= bg + 1)
		return (0);
	x[bg + 1] = '\0';
	c1--, c2--, size_x--;
	dr1 = *(n1 + c1) - 48, dr2 = *(n2 + c2) - 48;
	while (bg >= 0)
	{
		op = dr1 + dr2 + add;
		if (op >= 10)
			add = op / 10;
		else
			add = 0;
		if (op > 0)
		*(x + bg) = (op % 10) + 48;
		else
			*(x + bg) = '0';
		if (c1 > 0)
			c1--, dr1 = *(n1 + c1) - 48;
		else
			dr1 = 0;
		if (c2 > 0)
			c2--, dr2 = *(n2 + c2) - 48;
		else
			dr2 = 0;
		bg--, size_x--;
	}
	if (*(x) == '0')
		return (x + 1);
	else
		return (x);
}
