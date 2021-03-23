B#include "lists.h"
/**
 *insert_nodeint_at_index - insert a node list at the index
 *@head:pointer of type list_t;
 *@idx:unsigned int;
 *@n:integer;
 *Return: new_node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *ptr;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	ptr = *head;
	while (i < (idx - 1) && ptr->next != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	if (i < idx - 1)
		return (NULL);
	else
	{
	new_node->next = ptr->next;
	ptr->next = new_node;
	}
	return (new_node);
}
