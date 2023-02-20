#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alp, i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
