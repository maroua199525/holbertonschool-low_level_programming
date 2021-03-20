#include "lists.h"
/**
 *add_node_end - print a new node at the end
 *@head:struct of type list_t;
 *@str: string
 *Return: new_node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length;
	list_t *new_node, *ptr;

	ptr = *head;
	for (length = 0; str[length] != '\0'; length++)
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;
	return (new_node);
}
