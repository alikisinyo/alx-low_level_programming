#include <stdio.h>
#include "main.h"

/**
* print_array - Function prints element of array of integers
* @a: pointer parameter
* @n: interger variable
* Return: Always (0) Sucess
*/
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
