#include "lists.h"
/**
 *free_listint - free the list
 *@head:struct of type list_t;
 *Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
