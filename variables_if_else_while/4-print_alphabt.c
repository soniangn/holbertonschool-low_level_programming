#include <stdio.h>
/**
 * main - entry point
 * Description: prints the albphabet in lowercase, except q and e
 * Return: 0
 */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		putchar(c);
	}
	putchar('\n');
	return (0);
}
