#include "lists.h"
/**
 * add_node - function that add a new node
 * @head: head of the list
 * @str: new string
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *e;
	size_t i = 0;

	e = malloc(sizeof(list_t));

	if (e == NULL)
		return (NULL);

	while(*(str + i) != '\0')
		i++;
	e->str = strdup(str);
	e->len = i;
	e->next = *head;

	*head = e;

	return (e);
}
