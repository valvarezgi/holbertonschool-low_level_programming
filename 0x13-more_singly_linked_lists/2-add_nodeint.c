#include "lists.h"
/**
 * add_nodeint - function that add a new node
 * @head: head of the list
 * @n: elements
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *e;

	e = malloc(sizeof(listint_t));

	if (e == NULL)
		return (NULL);

	e->n = n;
	e->next = *head;

	*head = e;

	return (e);
}
