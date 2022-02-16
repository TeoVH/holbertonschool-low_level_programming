#include <stdio.h>
#include "main.h"

/**
 * _islower(int c) - Function
 *
 * @c: is a parameter
 *
 * return none
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
