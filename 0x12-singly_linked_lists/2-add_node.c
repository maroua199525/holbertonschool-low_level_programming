#include "lists.h"
/**
 *add_node - print a new node at the beging
 *@head:struct of type list_t;
 *@str: string
 *Return: head
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int length;
	list_t *new_node;

	for (length = 0; str[length] != '\0'; length++)
		;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
