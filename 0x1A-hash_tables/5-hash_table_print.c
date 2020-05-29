#include "hash_tables.h"

/**
 * hash_table_print - function that print a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *aux;
	unsigned int idx;
	int st = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		for (aux = ht->array[idx]; aux; aux = aux->next)
		{
			if (st == 0)
				st = 1;
			else
				printf(", ");
			printf("'%s': '%s'", aux->key, aux->value);
		}
	}
	printf("}\n");
}
