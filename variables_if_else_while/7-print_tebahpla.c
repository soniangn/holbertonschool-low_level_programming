#include <stdio.h>
/**
 * main - entry point
 * Description: prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	int i;
	for (i = 'z'; i < 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
