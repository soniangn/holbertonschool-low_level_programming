#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: prints the result of the operation
 * @argc: number of argument
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{

	int num1 = atoi(argv[1]);
	int operator = atoi(argv[2]);
	int num2 = atoi(argv[3]);
	int result = get_op_func(argv[2])(num1, num2);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	if (argv[2] == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	
	if ((operator == '/' || operator == '%') && num2 == '0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", result);
	return (0);
}
