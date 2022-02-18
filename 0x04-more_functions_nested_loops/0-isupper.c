#include <stdio.h>
#include "main.h"

/**
 * _isupper - Entry point
 * @c: Is a parameter
 * Return: 0 if is a uppercase
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
