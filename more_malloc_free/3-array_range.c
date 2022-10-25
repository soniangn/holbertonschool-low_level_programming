#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *array_range - entry point
 * @min: min integers
 * @max: maximum of integers
 * Description: creates an array of integers
 *	Return: a pointer to the newly created array
 *			Return NULL on failure and if min > max
 */

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	array = malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min += 1;
	}
	return (array);
}
