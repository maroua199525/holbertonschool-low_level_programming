#include "hash_tables.h"
/**
*hash_table_print - function that prints a hash table.
*@ht: hash_table_t
* Return: Void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, size, count = 0;

	if (ht == NULL)
	{
		return;
	}
	size = ht->size;
	printf("{");
	while (i <= size)
	{
		while (ht->array[i] != NULL)
		{
			if (count != 0)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
			count++;
		}
		i++;
	}
	printf("}\n");
}
