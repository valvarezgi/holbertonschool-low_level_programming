#include "lists.h"

/**
 * free_list - function that free the lists
 * @head: first item of the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *aux;

	while (head != 0)
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux);
	}
}
