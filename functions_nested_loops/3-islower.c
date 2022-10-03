#include "main.h"
/**
 * _islower - entry point
 * Description: checks for character in lowercase
 * Return: 0
 */
int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
		else
		{
			return (0);
	}
}
