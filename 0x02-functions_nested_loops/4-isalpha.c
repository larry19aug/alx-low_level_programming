#include "main.h"

/**
 * _islower - if lowercase
 *
 * Return: 1 (success)
 */

int _islower(int c)
{
	if ((c >= 'a' && c<= 'z') || (c >= 'A' && c<= 'Z'))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
	_putchar('\n');
}
