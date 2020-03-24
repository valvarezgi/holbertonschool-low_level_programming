#include "lists.h"

/**
 * print_listint - function that prints all elements of a linked list
 * @h: pointer to head
 * Return: numb of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != 0; i++)
	{
		printf("%d\n", h->n);

		h = h->next;
	}
		return (i);
}
