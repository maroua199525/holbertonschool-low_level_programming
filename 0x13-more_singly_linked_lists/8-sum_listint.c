#include "lists.h"
/**
 *sum_listint - return the sum of all the data
 *@head:pointer of type list_t;
 *Return: count
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		ptr = head->next;
		head = ptr;
	}
	return (sum);
}
