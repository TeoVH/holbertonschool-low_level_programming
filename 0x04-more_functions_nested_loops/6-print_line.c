#include <stdio.h>
#include "main.h"

/**
 * print_line - Entry point
 * @n: Is a parameter
 * Return; none
 */

void print_line(int n)
{
	int c = n;

	for (c = n; c > 0; c--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
