#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at the given index
 * @head: head of node
 * @index: where to delete the node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *aux = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	aux = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(aux);
		return (1);
	}
	while (aux->next != NULL)
	{
		if (counter == index)
		{
			aux->next->prev = aux->prev;
			aux->prev->next = aux->next;
			free(aux);
			return (1);
		}
		aux = aux->next;
		counter++;
	}
	return (-1);
}
