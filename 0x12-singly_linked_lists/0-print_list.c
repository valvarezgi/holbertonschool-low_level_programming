#include "lists.h"

/**
 * print_list - function that prints all elements of a linked list
 * @h: pointer to head
 * Return: numb of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != 0; i++)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}

		return (i);
	}
}
