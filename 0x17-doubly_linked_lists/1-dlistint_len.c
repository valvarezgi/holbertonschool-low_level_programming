#include "lists.h"

/**
 * dlistint_len - counts the number of elements of a list
 * @h: head of the list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t nCount = 0;

	while (h)
	{
		nCount++;
		h = h->next;
	}
	return (nCount);
}
