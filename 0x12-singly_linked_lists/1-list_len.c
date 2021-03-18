#include "lists.h"
/**
 *list_len - print a list
 *@h:pointer of type list_t;
 *Return: count
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	if (h->str == NULL)
		count++;
	else
		count++;
	while (h->next != NULL)
	{
		if (h->next->str == NULL)
			count++;
		h = h->next;
			count++;
	}
	return (count);
}
