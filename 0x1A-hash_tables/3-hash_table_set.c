#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @key: key
 * @value: value of key
 * @ht: hash table
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *aux;
	unsigned int idx = 0;

	idx = key_index((unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	if (ht == NULL || key == NULL)
		return (0);

	for (aux = ht->array[idx]; aux; aux = aux->next)
	{
		if (strcmp(aux->key, key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			free(new);
			return (1);
		}
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
