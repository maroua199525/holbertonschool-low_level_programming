#include "lists.h"
/**
* get_dnodeint_at_index - get the nth node of a dlistint_t linked list.
*@head: a pointer of type dlistint
*@index: unsigned integer
*Return:the nth node of a dlistint_t linked list.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	if (i < index)
	{
		return (NULL);
	}
	return (head);
}
