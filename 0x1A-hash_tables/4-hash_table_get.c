#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @key: key
 * @ht: hash table
 *
 * Return: value associated with the element or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *aux;
	unsigned int idx = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	for (aux = ht->array[idx]; aux; aux = aux->next)
		if (strcmp(aux->key, key) == 0)
			return (aux->value);
	return (NULL);
}
