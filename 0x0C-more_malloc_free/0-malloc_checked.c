#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -  a function that allocates memory using malloc
 * @b: memory size allocated
 * Return:  a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *memory = malloc(b);

	if (memory == NULL)
	{
		exit(98);
	}

	return (memory);
}
