#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: head 
 * @idx: index to insert node
 * @n: data of the node
 * Return: list with new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter = 1;
	dlistint_t *aux = NULL, *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || h == NULL)
		return (NULL);
	new->n = n;
	aux = *h;
	if (idx == 0)
	{
		*h = new;
		new->next = aux;
		new->prev = NULL;
		aux->prev = new;
		return (new);
	}
	while (aux->next != NULL)
	{
		if (counter == idx)
		{
			new->prev = aux;
			new->next = aux->next;
			aux->next = new;
			new->next->prev = new;
		}
		aux = aux->next;
		counter++;
	}
	if (counter == idx)
	{
		new->prev = aux;
		new->next = NULL;
		aux->next = new;
	}
	if (counter < idx)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
