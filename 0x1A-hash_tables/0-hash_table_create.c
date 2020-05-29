#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table or NULL if it fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned int i;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	new->size = size;
	return (new);
}
