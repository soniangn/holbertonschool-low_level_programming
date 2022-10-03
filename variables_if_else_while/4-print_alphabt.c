#include <stdio.h>
/**
 * main - entry point
 * Description: prints the albphabet in lowercase, except q and e
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	while (c != 'a' && 'e')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
