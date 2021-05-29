#include "hash_tables.h"

/**
*hash_table_delete -  deletes a hash table.
*@ht: hash_table_t
*Return : void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0, size;
	hash_node_t *ptr, *tmp;

	size = ht->size;
	if (ht == NULL)
		return;
	while (i < size)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			tmp = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
			ptr = tmp;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
