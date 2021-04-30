#include "lists.h"
/**
*add_dnodeint_end -  adds a new node at the end of a dlistint_t list
*@head: a pointer to pointer of type dlistint
*@n: integer
*Return:the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = *head;
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	new_node->prev = tmp->next;
	tmp->next = new_node;
	new_node->next = NULL;
	return (new_node);
}
