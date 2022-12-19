#include <stdio.h>
#include "main.h"

/**
 * main - swaps the values of two integers
 * @a: value to be evaluated
 * @b: Value to be evaluated
 * Return (0);
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;

}
