#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: Is the key
 * @size: Is the size of the array
 * Return: The index at which the key/value pair should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size);
{
	if (key == NULL)
	{
		return (0);
	}

	return (hash_djb2(key) % 2);
}
