#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: Is a parameter
 * Return: n
 */

void print_diagonal(int n)
{
	int e;
	int c;

	if (n > 0)
	{
		for (e = 0; e < n; e++)
		{
			for (c = 0; c < e; c++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
