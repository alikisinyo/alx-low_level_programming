#include "main.h"

/**
 * print_alphabet - print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet(void)
{
	int round = 0;
	char letter = 'a';

	while (round < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');

		round++;
	}
}
