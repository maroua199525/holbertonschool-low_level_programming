#include "lists.h"
/**
 *add_nodeint - add a node in the list
 *@head:pointer of type list_t;
 *@n:integer
 *Return: new_node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
