#include <stdio.h>
/**
 * main - Printing alphabets except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (i != 'e' && i != 'q')
	putchar(i);
	}
	putchar('\n');

	return (0);
}
