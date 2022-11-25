#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_delete - entry point
 * Description: deletes a hash table
 * @ht: pointeur to the hash table
 * Return: 0
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp, *next;

	temp = ht->array[i];

	while (i < ht->size)
	{
		while (temp)
		{
			next = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = next;
		}
		free(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
}

