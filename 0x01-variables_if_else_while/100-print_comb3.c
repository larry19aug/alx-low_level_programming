#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, n;

	while (n < 10)
	{
		i = 0;

		while (i < 10)
		{
			if (n != i && n < i)
			{
				putchar(n);
				putchar(i);
				if (i == 9 && n == 7)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
