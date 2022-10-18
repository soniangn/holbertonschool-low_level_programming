#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	for (argc = 0; argc >= 0; argc++)
		printf("%s\n", argv[argc]);
	return (0);
}
