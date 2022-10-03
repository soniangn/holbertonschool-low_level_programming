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
	char k;
	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 10; j++)
			for (k = 'a'; k <= 'f'; k++)
				putchar(i, j, k);
	}
	putchar('\n');
	return (0);
}
