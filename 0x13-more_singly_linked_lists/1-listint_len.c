#include "lists.h"
/**
 *listint_len - count the number of list
 *@h:pointer of type list_t;
 *Return: count
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
