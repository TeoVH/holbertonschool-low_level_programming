#include <stdio.h>
#include "main.h"

/*
 * Main - cheack the code
 *
 * Return: Always 0
 *
 */

void print_alphabet(void)
{
	char alfabeto;

	alfabeto = 'a';
	
	while (alfabeto <= 'z')
	{
		_putchar(alfabeto);
		alfabeto++;
	}
	_putchar('\n');
}
