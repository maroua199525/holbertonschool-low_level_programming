#include "lists.h"
/**
 *free_listint2 - free the list
 *@head:struct of type list_t;
 *Return: void
 */
void free_listint2(listint_t **head)
{
	 listint_t *ptr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}
	head = NULL;
}
