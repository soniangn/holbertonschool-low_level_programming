#include "main.h"

/**
 *  * *_memset - entry point
 *   * @s: memory area
 *    * @b: constant byte
 *     * @n: first n bytes of the memory area
 *      * Description: fills memory with a constant byte
 *       * Return: pointer to the memory area
 *        */
char *_memset(char *s, char b, unsigned int n)
{
		unsigned int i;

			for (i = 0; i < n; i++)
						s[i] = b;
				return (s);
}
