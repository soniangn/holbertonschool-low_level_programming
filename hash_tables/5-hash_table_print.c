#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_print - entry point
 * Description: prints a hash table
 * @ht: pointeur to the hash table
 * Return: 0
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	char n;
	hash_node_t *item = NULL;

	printf("{");
	for (; ht && i < ht->size; i++)
	{
		item = ht->array[i];
		n = 0;
		while (item)
		{
			if (n)
				printf(", ");
			printf("'%s': '%s'", item->key, item->value);
			item = item->next;
			n = 1;
		}
	}
	printf("}");
}

