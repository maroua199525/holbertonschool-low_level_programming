#include "lists.h"
/**
*free_dlistint - frees a dlistint_t list
*@head: a pointer to pointer of type dlistint
*Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}

}
