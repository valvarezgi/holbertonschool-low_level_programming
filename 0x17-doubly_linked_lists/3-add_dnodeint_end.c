#include "lists.h"

/**
 * add_dnodeint_end - add node to end of list
 * @head: head of list
 * @n: data of node
 * Return: address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *newNode, *aux;

    newNode = malloc(sizeof(dlistint_t));
    newNode->n = n;
    newNode->next = NULL;

    aux = *head;
    if(aux)
    {
        while(aux->next)
        aux = aux->next;
        aux->next = newNode;
        newNode->prev = aux;
    }
    else
    {
        newNode->prev = NULL;
        *head = newNode;
    }
    return(newNode);
}