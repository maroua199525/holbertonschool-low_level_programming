#include "lists.h"
/**
 *free_list - free the list
 *@head:struct of type list_t;
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
