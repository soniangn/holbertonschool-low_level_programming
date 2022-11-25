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
	int flag = 0;
	hash_node_t *item = NULL;

	if (ht)
	{
		printf("{");
		for (; i < ht->size; i++)
		{
			item = ht->array[i];
			while (item != NULL)
			{
				if (flag == 1)
					printf(", ");
				
				flag = 1;
				printf("'%s': '%s'", item->key, item->value);
				item = item->next;
			}
		}
		printf("}\n");
	}
}

