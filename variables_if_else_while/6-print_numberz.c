#include <stdio.h>
/**
 * main - entry point
 * Description: prints all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		putchar ((i % 10) +'0');
	}
	putchar('\n');
	return (0);
}
