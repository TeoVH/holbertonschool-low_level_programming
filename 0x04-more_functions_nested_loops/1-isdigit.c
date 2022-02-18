#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Entry point
 * @c: Is a parameter
 * Return: 1 if is a number from 0 to 9
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
