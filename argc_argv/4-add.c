#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, n = 0;

	if (argc == 0)
	{
		printf("%s\n", "0");
	}

	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]))
		{
			n += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", n);
	return (0);
}
