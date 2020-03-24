#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: head of linked list
 * @index: index of the node, starting at 0
 * Return: head node's data (n)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *aux;

	aux = head;

	while (i < index && aux != NULL)
	{
		aux = aux->next;
		i++;
	}
	if (i != index)
		return (NULL);
	return (aux);
}
