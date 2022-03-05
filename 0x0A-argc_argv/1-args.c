#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: size of argv
 * @argv: array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
