#include "hash_tables.h"
/**
*hash_table_set - adds an element to the hash table.
*@ht: hash_table_t
* Return: Void
*/
void hash_table_print(const hash_table_t *ht)
{
   
    unsigned long int i = 0, size;
   
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
            if (i > 0)
                printf(", ");
		    printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
            ht->array[i] = ht->array[i]->next;
        }
        i++;
	}
    printf("}\n");
}
