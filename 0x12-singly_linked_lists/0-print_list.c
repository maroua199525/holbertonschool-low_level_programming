#include "lists.h"
/**
 *print_list - print a list
 *@h:pointer of type list_t;
 *Return: count
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		count++;
	}
	else
	{
	printf("[%d] %s\n", (*h).len, (*h).str);
	count++;
	}
	if (h->next != NULL)
	{
		if (h->next->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
		}
		else
		{
		printf("[%d] %s\n", h->next->len, h->next->str);
		count++;
		}
	}
	return (count);
}
