#include "main.h"
/**
 * _isalpha - entry point
 * Description: checks for alphabetic character
 * parameter c: character to check
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}