#include "hash_tables.h"
#include <stdlib.h>
/**
 * key_index - entry point
 * Description: gives the index of a key
 * @key: the key
 * @size: size of the array
 * Return: the index at which the key/value pair should be
 *			stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
