#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at specified index
 * of linked list
 * @head: head of the linked list
 * @index: index to delete
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux, *deleteNode;
	unsigned int i = 0;

	aux = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(aux);
	}
	else
	{
		while (i < index - 1)
		{
			aux = aux->next;
			if (aux == NULL)
				return (-1);
			i++;
		}
		deleteNode = aux;
		deleteNode = deleteNode->next;
		aux->next = deleteNode->next;
		free(deleteNode);
	}
	return (1);
}
