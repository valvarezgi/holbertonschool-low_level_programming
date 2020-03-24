#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at given position
 * @head: head of the node
 * @idx: index where to place node
 * @n: data for the node
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *aux;
	unsigned int i = 0;

	newNode = malloc(sizeof(listint_t));
	if(newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	aux = *head;

	if (*head == NULL && idx > 0)
	{
		free(newNode);
		return(NULL);
	}
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (i < idx - 1)
	{
		aux = aux->next;
		if (aux == NULL && idx - i > 0)
		{
			free(newNode);
			return (NULL);
		}
		i++;
	}
	newNode->next = aux->next;
	aux->next = newNode;
	return (newNode);
}
