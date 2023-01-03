#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - entry point
 * Description: retrieves a value associated with a key
 * @ht: pointeur to the hash table
 * @key: the key looked for
 * Return: the value associated with the element or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *item = NULL;
	char *value;

	if (key == NULL || ht == NULL)
		return (NULL);

	/* Application of the djb2 function to the element to get the index */
	index = key_index((unsigned char *)key, ht->size);

	item = ht->array[index];
	while (item != NULL)
	{
		if (strcmp(item->key, key))
			value = item->value;
		item = item->next;
	}

	return (value);
}

