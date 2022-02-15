#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int unidades;
	int decimales;

	for (decimales = '0'; decimales <= '9'; decimales++)
	{
		for (unidades = (decimales + 1); unidades <= '9'; unidades++)
		{
			putchar(decimales);
			putchar(unidades);

			if (decimales != '8' || unidades != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
