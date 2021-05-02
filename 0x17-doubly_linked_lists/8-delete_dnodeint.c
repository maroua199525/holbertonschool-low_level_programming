#include "lists.h"
/**
*delete_dnodeint_at_index -  delete_dnodeint_at_index
*@head: a pointer to pointer of type dlistint
*@index: unsigned integer
*Return:1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	tmp = *head;
	if (index == 0)
	{
		if (index == 0)
	{
		*head = tmp->next;
		if (tmp->next != NULL)
		{
			tmp->next->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	}
	if (index != 0)
	{
		while (tmp != NULL && i < index)
		{
			tmp = tmp->next;
			i++;
		}
	}
	if (i < index)
	{
		return (-1);
	}
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp;
	free(tmp);
	return (1);
}
