#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: prints the result of the operation
 * @argc: number of argument
 * @argv: array of arguments
 * Return: 0. Exit 98 if argc wrong, exit 99 if wrong
 *			operator, exit 100 if wrong operation
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int operator = *argv[2];
	int (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	result = (get_op_func(argv[2]));

	if (result == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", result(num1, num2));
	return (0);
}
