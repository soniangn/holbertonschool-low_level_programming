#include <stdio.h>
/**
 * main - entry point
 * Description: prints all possible combination of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar ((i % 10) + '0');
		if (i < 10)
		{
			putchar(',');
			putchar ((i % 10) + '0');
			putchar ('\n');
		}
	}
	Return(0);
}
