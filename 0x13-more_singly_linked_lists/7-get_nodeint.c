#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of linked list
 * @index: unsigned integer
 * Return: nth node of the listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;
	listint_t *p = head;

	while (p && i < index)
	{
		p = p->next;
		i++;
	}

	return (p ? p : NULL);
}
