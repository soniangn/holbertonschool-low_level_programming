#include <stdio.h>
/**
 * main - entry point
 * Description: prints all possible combination of
 *				two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int i = 0, j = 0, k = 0, l = 0;

	for (; i <= '9'; i++)
	{
		for (; j <= '9'; j++)
		{
			if ((i != j) && (i < j))
			{
				putchar(i);
				putchar(j);
				putchar(" ");
			}	
			
			for (; k <= '9'; k++)
   			{
				for (; l <= '9'; l++)
				{
					if ((k != l) && (k < l))
		 			{
						putchar(k);
						putchar(l);
					}
				}
			}
			
			if ((i <= '9') && (j < '9') && (k <= '9') && (l <= '9'))
				putchar(",");
		}
	}
}
