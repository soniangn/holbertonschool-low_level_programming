#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - entry point
 * Description: creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table,
 *			NULL if failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);

	if (new_table->array == NULL)
	{
		free(new_table->array);
		free(new_table);
		new_table = NULL;
		return (NULL);
	}

	for (; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
