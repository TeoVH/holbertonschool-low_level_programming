#include <stdio.h>
#include "main.h"

/**
 *times_table - Entry point
 *
 *Return: none
 *
 */

void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (b  == 0)
			{
				_putchar('0' + (c));
			}
			if (c <= 9 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (c) % 10);
			}
			else if (c >= 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (c) / 10);
				_putchar('0' + (c) % 10);
			}
		}
		_putchar('\n');
	}
}
