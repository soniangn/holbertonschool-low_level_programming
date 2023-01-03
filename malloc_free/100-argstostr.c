#include "main.h"
#include <stdlib.h>

/**
 * *argstrostr - entry point
 * @ac: number of arguments
 * @av: pointer to an array of arguments 
 * Description: concatenates all the arguments of the program
 *	Return: a pointer to a new string or NULL if failure
 */

char *argstostr(int ac, char **av)
{
	char *concat;
	int i = 0;
	int length_s1 = 0;
	int length_s2 = 0;

	if (ac == 0)
		return (NULL);

	if (av == NULL)
		s2 = "";

	length_s1 = strlen(s1);
	length_s2 = strlen(s2);

	concat = malloc((length_s1 + length_s2 + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	while (*s1 != '\0')
	{
		concat[i] = *s1;
		i++;
		s1++;
	}

	while (*s2 != '\0')
	{
		concat[i] = *s2;
		i++;
		s2++;
	}

	concat[length_s1 + length_s2] = '\0';
	return (concat);
	free(concat);
}
