#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alp = 'a';

	for (alp = 'a'; alp <= 'z' && alp != 'q' && alp != 'e'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
