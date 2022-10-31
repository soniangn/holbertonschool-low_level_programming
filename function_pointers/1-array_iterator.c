#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - entry point
 * Description: executes a function given as a
 *				parameter on each element of an array
 * @array: an array of elements
 * @size: size of the array
 * @action: pointer to the function to use
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i = 0;

	for (; i < size; i++)
		action(array[i]);
}
