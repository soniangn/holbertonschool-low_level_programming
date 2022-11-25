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
	hash_node_t *element = NULL, *temp = NULL;
	unsigned long int index = 0;
	char *value_copy = NULL, *key_copy = NULL;

	if (key == NULL || ht == NULL)
		return (0);

	/* Creation of copies of the key & value pair */
	value_copy = strdup(value);
	key_copy = strdup(key);
	/* Application of the djb2 function to the element to get the index */
	index = key_index((unsigned char *)key, ht->size);
	/* Case 1 : If same key => updates value */
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = value_copy;
			free(temp);
			return (1);
		}
		temp = temp->next;
	}
	/* Case 2: Free spot for the element to add */
		/* Creation of the element */
	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
	{
		free(element);
		return (0);
	}
	element->key = key_copy;
	element->value = value_copy;
	/*Addition of the element */
	element->next = ht->array[index];
	ht->array[index] = element;
	return (1);
}

