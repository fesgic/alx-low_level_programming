#include "hash_tables.h"

/**
 * key_index - gives index of key
 * @key: key
 * @size: size of array hash table
 *
 * Return: index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h;

	if (key == NULL)
		EXIT_FAILURE;
	h = hash_djb2(key);
	return (h % size);
}
