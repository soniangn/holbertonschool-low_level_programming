#include <stdio.h>
/**
 * main - entry point
 * Description: prints all number of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char i;
	char j;
	for (i = 0; i <= 1; i++)
	{
		putchar((i % 10) + '0');
	}	
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
