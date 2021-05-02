#include "lists.h"
/**
*insert_dnodeint_at_index -  inserts a new node at a given position.
*@h: a pointer to pointer of type dlistint
*@idx:unsigned int
*@n: integer
*Return:the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	unsigned int i = 0;
	dlistint_t *nth_node, *tmp;

	tmp = *h;
	nth_node = malloc(sizeof(dlistint_t));
	if (nth_node == NULL)
	{
		return (NULL);
	}
	nth_node->n = n;
	if (*h == NULL)
	{
		*h = nth_node;
		nth_node->next = NULL;
		nth_node->prev = NULL;
		return (nth_node);
	}
	if (idx == 0)
	{
		nth_node->next = tmp;
		tmp = nth_node;
		nth_node->prev = NULL;
		return (nth_node);
	}

	while (tmp != NULL && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (i < idx - 1)
	{
		return (NULL);
	}
	nth_node->prev = tmp;
	nth_node->next = tmp->next;
	tmp->next->prev = nth_node;
	tmp->next = nth_node;
	return (nth_node);
}
