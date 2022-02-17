#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: Is a parameter
 * Return: Always 0
 */

int print_last_digit(int n)
{
	if (n > 0)
	{
		_putchar('0' + (n % 10));
	}
	else
	{
		n = n * -1;
		_putchar('0' + (n % 10));
	}
	return (n % 10);
}
