#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *create_array - entry point
 * @size: size of the memory to print
 * @c: specific char
 * Description: creates an array of chars,
 *				initialized with a specific char
 *	Return: a pointer to the array or NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	for (; i < size; i++)
		s[i] = c;
	
	return (s);
	free(s);
}
