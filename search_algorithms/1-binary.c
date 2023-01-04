#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>

/**
 * binary_search - function that searches for a value
 *  in a sorted array of integers using Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;
	size_t idx = 0;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");

		for (idx = low; idx <= high; idx++)
		{
			printf("%d", array[idx]);
			if (idx < high)
				printf(", ");
		}
		printf("\n");

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
