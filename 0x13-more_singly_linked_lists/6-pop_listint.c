B#include "lists.h"
/**
 *pop_listint -  the list
 *@head:struct of type list_t;
 *Return: void
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int x;

	if (*head == NULL)
		return (0);
	ptr = *head;
	x = (*head)->n;
	*head = (*head)->next;
	free(ptr);
	return (x);
}
