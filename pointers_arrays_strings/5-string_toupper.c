#include "main.h"

/**
 * *string_toupper - entry point
 * Description: changes alle lowercase letters of a string
 *				to uppercase
 * Return: uppercase string
 */
char *string_toupper(char *)
{
	int i;
	int *_;

	for (i = 0; *_ != '\0'; i++)
	{
		if (*_ >= 'a' && *_ <= 'a')
			*_ -= 32;
	}
	return (*_);
}
