#include <stdio.h>
/**
 * main - entry point
 * Description: prints the albphabet in lowercase, except q and e
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	do {
		putchar(c);
		c++;
	} while (c != 'e' || c != 'q');
	putchar('\n');
	return (0);
}
