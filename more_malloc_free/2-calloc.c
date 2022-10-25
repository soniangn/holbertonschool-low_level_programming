#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *_calloc - entry point
 * @nmemb: elements of the array
 * @size: elements bytes
 * Description: allocates memory for an array of nmemb elements
 *	Return: a pointer to the allocated memory
 *			Return NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *_cal;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	_cal = malloc(nmemb * size);

	if (_cal == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		_cal[i] = 0;

	return (_cal);
	return (0);
}
