#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: The name to print
 * @f: Function to execute
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
	{
		return;
	}

	f(name);
}
