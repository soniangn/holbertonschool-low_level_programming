#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - entry point
 * Description: adds an element to the hash table
 * @ht: pointeur to the hash table
 * @key: the key
 * @value: value associated with the key
 * Return: 1 is success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element = NULL;
	hash_node_t *temp = NULL;
	unsigned long int index = 0;

	if (key == NULL)
		return (0);

	/* Creation of the element */
	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
	{
		free(element);
		return (0);
	}

	element->key = strcpy(element->key, key);
	element->value = strcpy(element->value, value);

	/* Application of the djb2 function to the element to get the index */
	index = key_index((unsigned char *)key, ht->size);

	/* When positioned on the array[index] - handles cases */
	while (ht->array[index])
	{
		temp = ht->array[index];
		/* Case 1 : If same key => collision -> Handles collision */
		if (temp->key == element->key)
		{
			free(temp->value);
			temp->value = element->value;
			free(element);
			free(temp);
			return (1);
		}
		/* Case 2: Free spot for the element to add */
		element->next = ht->array[index];
		ht->array[index] = element;
	}

	return (1);
}

