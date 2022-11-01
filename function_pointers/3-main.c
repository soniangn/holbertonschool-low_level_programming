#include "3-calc.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: calls the function to process the operation
 * Return: 
 */

int main(int argc, char *argv[]);
{

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	if (argv[2] != ops[0])
	{
		printf("Error\n");
		exit(99);
	}
	
	if ((argv[2] == '/' || argv[2] == '%') && argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	
	results = get_op_function(argv[2])(num1, num2);

	printf("%d\n", result);
}
