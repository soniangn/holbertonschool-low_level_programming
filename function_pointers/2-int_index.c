#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - entry point
 * Description: searches for an integer
 * @array: an array of elements
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: the index of the first element for which the cmp
 *			function does not return 0. If no element matches,
 *			return -1. If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
