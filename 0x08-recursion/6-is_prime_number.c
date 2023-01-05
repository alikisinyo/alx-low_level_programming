#include "main.h"
#include <stdio.h>

/**
 * evaluate_num - recursion loop
 * @num: num
 * @iter: number to iterate
 * Return: return 1 or 0
 */

int evaluate_num(int num, int iter)
{

	if (iter == num - 1)
	{
		return (1);
	}

	else if (num % iter == 0)
	{
		return (0);
	}

	if (num % iter != 0)
	{
		return (evaluate_num(num, iter + 1));
	}

	return (0);
}

/**
 * is_prime_number - evaluate prime or not
 * @num: number
 * Return: return 1 prime - return 0 otherwise
 */

int is_prime_number(int num)
{
	int iter;

	iter = 2;

	/* only greater than 2*/

	if (num < 2)
	{
		return (0);
	}

	if (num == 2)
	{
		return (1);
	}

	return (evaluate_num(num, iter));
}
