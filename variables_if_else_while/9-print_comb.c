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
		putchar (i);
		if (i < 10)
		{
			putchar(',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return(0);
}
