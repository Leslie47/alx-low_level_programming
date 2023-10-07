#include <stdio.h>
/**
 * main - Printing hexaDecimals
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char i;

	for (a = 0; a <= 9; a++)
	putchar(a);
	for (i = 'A'; i <= 'F'; i++)
	putchar(i);
	putchar('\n');
	return (0);
}
