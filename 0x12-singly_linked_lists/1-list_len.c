#include "lists.h"

/**
 * list_len - returns number of elements in a linked list_t list.
 * @h: linked list
 * Return: number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}