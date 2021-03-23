#include "lists.h"
/**
 *get_nodeint_at_index - get the index of the node
 *@head:struct of type list;
 *@index:unsigned int
 *Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head->next != NULL)
	{
		head = head->next;
		i++;
	}
	if (i < index)
		return (NULL);
	return (head);
}
