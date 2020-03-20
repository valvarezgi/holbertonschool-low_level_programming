#include "lists.h"
/**
 * add_node_end - Function that adds a new node at the end of the linked list
 * @head: head of the list
 * @str: new string to add
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list, *l;
	size_t i = 0;

	list = malloc(sizeof(list_t));


	if (list == NULL)
		return (NULL);

	while (*(str + i) != '\0')
		i++;
	list->str = strdup(str);
	list->len = i;
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
