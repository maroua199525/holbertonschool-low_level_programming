#include "lists.h"
/**
 *reverse_listint - reverse the list;
 *@head:pointer of type list_t;
 *Return: count
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *tmp;

	if (*head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	tmp = NULL;
	while (*head != NULL)
	{
		ptr = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = ptr;
	}
	*head = tmp;
	return (*head);
}
