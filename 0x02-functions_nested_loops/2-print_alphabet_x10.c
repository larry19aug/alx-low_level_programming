#include "main.h"

/**
 * print_alphabet_x10 - 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char alp;
	int i = 1;

	for (i = 1; i <= 10; i++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}

