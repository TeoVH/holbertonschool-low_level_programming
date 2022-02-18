#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Entry point
 * Return: none
 */

void more_numbers(void)
{
	int n;
	int c;

	for (c = 1; c <= 10; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n / 10 > 0)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
