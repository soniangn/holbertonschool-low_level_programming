#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * *malloc_checked - entry point
 * @b: size
 * Description: allocates memory using malloc
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	int *memory;

	memory = malloc(b);

	if (memory == NULL)
	{
		free(memory);
		exit(98);
	}
	return (memory);
	return (0);
}
