#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: assigns a random number and print the last digit of the number
 * Return: 0
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
					printf("Last digit of %d is", n);
					if (n > 5)
					{
						printf("and is greater than 5");
					} else if (n == 0)
					{
						printf("and is 0") {
					} else
					{
						printf("and is less than 6 and not 0");
					}
					return (0);
}
