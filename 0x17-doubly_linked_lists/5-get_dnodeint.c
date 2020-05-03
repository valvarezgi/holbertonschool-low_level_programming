#include "lists.h"

/**
 * get_dnodeint_at_index - gets data node at the index
 * @head: head of the list
 * @index: index given
 *
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux;
	unsigned int i;

	*aux = head;
	for (i = 0; aux; aux = aux->next, i++)
	{
		if (i == index)
			return (aux);
	}
	return (NULL);
}
