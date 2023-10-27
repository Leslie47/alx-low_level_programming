#include "main.h"
/**
 * _abs - finds the absolute value of a number
 * @a: function of a parameter
 * Return: -a or a;
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
