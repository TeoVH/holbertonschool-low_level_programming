#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Entry point
 * Return: none
 */

void more_numbers(void)
{
	int n = 0;
	int c = 0;

	while (c < 11)
	{
		while (n < 15)
		{
			if (n >= 10)
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
			else
			{
				return (n);
			}
		}
		_putchar('\n');
	}
}
