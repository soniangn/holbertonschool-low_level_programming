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
{
	int i, x, y;

	x = atoi(argv[1]);
	y = atoi(argv[2]);		
	i = x * y;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else 
	{
		printf("%d\n", i);
		return (0);
	}
}
