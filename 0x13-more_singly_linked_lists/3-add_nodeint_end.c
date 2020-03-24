#include "lists.h"
/**
 * add_nodeint_end - Function that adds a new node at the end of linked list
 * @head: head of the list
 * @n: elements
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list, *l;

	list = malloc(sizeof(listint_t));


	if (list == NULL)
		return (NULL);

	list->n = n;
	list->next = NULL;

	if (*head != NULL)
	{
		l = *head;
		while (l->next != NULL)
			l = l->next;
		l->next = list;
	}
	else
		*head = list;
	return (list);
}
