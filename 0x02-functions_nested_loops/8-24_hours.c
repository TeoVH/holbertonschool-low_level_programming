#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Entry point
 * Return: Always 0
 *
 */

void jack_bauer(void)
{
	int m = 0;
	int h = 0;

	while (h <= 23)
	{
		while (m < 60)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar('\n');
			m++;
		}
		m = 0;
		h++;
	}
}
