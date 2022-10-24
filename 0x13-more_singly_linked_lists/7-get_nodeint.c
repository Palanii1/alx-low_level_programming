#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * *get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of linked list
 * @index: unsigned integer
 * Return: nth node of the listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *p;

	p = head;
	for (i = 0; i < index; i += 1)
	{
		if (p == NULL)
			return (NULL);
		p = p->next;
	}
	
	return (p);
}
