#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Entry point
 * Return: none
 */

void print_numbers(void)
{
	int c = 0;

	while (c <= 10)
	{
		_putchar('0' + c);
		c++;
	}
	_putchar('\n');
}
