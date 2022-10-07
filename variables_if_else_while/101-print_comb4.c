#include <stdio.h>
/**
 * main - entry point
 * Description: prints all possible combination of three 
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
				if (((i != j) && (i < j)) && ((i != k) && (i < k)) && ((j != k) && (j < k)))
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i < '8')
					{
						putchar(',');
						putchar (' ');
					}
				}
		}
	}
	putchar ('\n');
	return (0);
}
