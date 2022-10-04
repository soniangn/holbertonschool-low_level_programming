#include "main.h"
/**
 * _islower - entry point
 * Description: checks for character in lowercase
 * Return: 0
 */
int _islower(int c)
{
	char i;
	int letter;
	
	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			letter = 1;
		}
		else
		{
			letter = 0;
		}
	}
	return letter;
}
