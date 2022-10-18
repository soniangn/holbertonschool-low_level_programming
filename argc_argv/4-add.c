#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of string
 * Return: 0
 */

int main(int argc, char *argv[])
{i
	int i, n = 0;

	if (argc == 0)
	{
		printf("%s\n", "0");
	}

	for (i = 1; i < argc; i++)
	{
		if (!atoi(*argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		else
		{
			n += atoi(argv[i]);
		}
	}
	printf("%d\n", n);
	return (0);
}
