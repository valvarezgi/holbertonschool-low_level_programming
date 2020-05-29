#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table to delete
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux, *temp;
	unsigned int idx;

	if (ht == NULL)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		for (aux = ht->array[idx]; aux; )
		{
			temp = aux;
			aux = aux->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
