#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements in the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int *i = a;
	int *p;
	int b = 0;

	p = a + n - 1;
	for (; i < p; i++, p--)
	{
		b = *p;
		*p = *i;
		*i = b;
	}
}
