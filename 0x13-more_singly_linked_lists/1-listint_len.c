#include "lists.h"

/**
 * listint_len - function that returns the number of elements of a linked list
 * @h: head
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{

	size_t i = 0;


	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
