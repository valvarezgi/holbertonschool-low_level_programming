#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: head of the list
 * @n: data of the new node
 * Return: Adress of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t newNode;

	newNode = malloc(sizeof(dlistint_t))

		if (!newNode)
			return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head)
		(*head)->prev = newNode;
	*head = newNode;

	return (*head);
}
