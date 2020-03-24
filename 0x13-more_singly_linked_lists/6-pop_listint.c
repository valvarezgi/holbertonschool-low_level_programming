#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: head of linked list
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *aux;

	if (*head == NULL)
		return (0);

	aux = *head;
	*head = (*head)->next;
	n = aux->n;
	free(aux);
	return (n);
}
