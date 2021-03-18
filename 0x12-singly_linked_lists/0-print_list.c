#include "lists.h"
/**
 *print_list - print a list
 *@h:pointer of type list_t;
 *Return: count
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", (h)->len, (h)->str);
		h = h->next;
		count++;
	}
	return (count);
}
