#include "hash_tables.h"
/**
*hash_table_set - adds an element to the hash table.
*@ht: hash_table_t
*@key: const char
*@value: const char
* Return: 1 on success, 0 on failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *ptr, *tmp;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	if (ptr == NULL)
	{
		ht->array[index] = create_node(key, value);
		return (1);
	}
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			if (ptr->value == NULL)
				return (0);
			return (1);
		}
		tmp = ptr;
		ptr = ptr->next;
	}
	tmp->next = create_node(key, value);
	return (1);
}
/**
* create_node -  create a node of type hash_node_t
*@key: const char
*@value: const char
*Return: a pointer to the node
*/
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
		return (0);
	node->value = strdup(value);
	if (node->value == NULL)
		return (0);
	node->next = NULL;
	return (node);
}
