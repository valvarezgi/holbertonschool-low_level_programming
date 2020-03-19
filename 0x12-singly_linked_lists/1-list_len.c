#include "lists.h"

/**
 * list_len - function that returns the number of elements of list_t
 * @h: head
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	list_t *lis;
	size_t i = 0;

	lis = (list_t *)h;
	while (h != NULL && lis != NULL)
	{

		i++;
		lis = lis->next;
	}
	return (i);
}
