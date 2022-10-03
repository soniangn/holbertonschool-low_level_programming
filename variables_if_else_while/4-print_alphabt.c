#include <stdio.h>
/**
 * main - entry point
 * Description: prints the albphabet in lowercase, except q and e
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	for (c='a'; (c != 'q' && c != 'e'); c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
