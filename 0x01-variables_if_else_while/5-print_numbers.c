#include <stdio.h>
/**
 * main - Display numbers of base 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
	putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
