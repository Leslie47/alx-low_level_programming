#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints a random number and displays if positive, negative or zero.
 *
 * Return: always 0 (Success).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("The number: %d is positive.\n", n);
	else if (n < 0)
	printf("The number: %d is negative.\n", n);
	else
	printf("The number: %d is zero.\n");
	}
	return (0);
}
