#include "main.h"
#include <stdio.h>
/**
 * set_string - entry point
 * @s: double pointer to a string
 * @to: pointer to a char
 * Description: sets the value of a pointer to a char
 * Return: 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
