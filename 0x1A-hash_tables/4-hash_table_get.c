#include "hash_tables.h"
/**
*hash_table_get - function that retrieves a value associated with a key.
*@ht: hash_table_t
*@key: const char
* Return: the value associated with the element, or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{

	hash_node_t *ptr;
	char *value = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	if (ptr == NULL)
	{
		return (NULL);
	}
	value = strdup(ptr->value);
	return (value);
}
