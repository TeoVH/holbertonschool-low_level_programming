#include <stdio.h>
#include "main.h"

/**
 * main - pritn the name of the file
 * @argc: Size of argv
 * @argv: Array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
