#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: Is a parameter
 * Return: Always 0
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (n > 0)
	{
		_putchar('0' + ld);
	}
	else
	{
		ld = ld * -1;
		_putchar ('0' + ld);
	}
	return (ld);
}
