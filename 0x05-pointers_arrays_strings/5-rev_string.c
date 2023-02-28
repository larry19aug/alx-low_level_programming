#include "main.h"

/**
 * rev_string - print a string in reverse
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int a, b, end;
	char beg;

	a = 0;

	while (s[a] != '\0')
		a++;
	a--;
	for (b = 0; b <= a / 2; b++)
	{
		beg = s[b];
		end = s[a - b];
		s[b] = end;
		s[a - b] = beg;
	}
}
