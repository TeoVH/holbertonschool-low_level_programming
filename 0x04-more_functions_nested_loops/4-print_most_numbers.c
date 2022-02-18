#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Entry point
 * Return: none
 */

void print_most_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		if (a != 2 && a != 4)
		{
			_putchar('0' + a);
		}
		a++;
	}
	_putchar('\n');
}
