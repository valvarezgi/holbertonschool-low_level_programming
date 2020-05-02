#include "lists.h"
/**
 * print_dlistint - print the elements of a linked list
 * @h: head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nCount = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nCount++;
		h = h->next;
	}
	return (nCount);
}
