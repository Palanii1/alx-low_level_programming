#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer
 * @idx: index of list where node will be added. starts at 0
 * @n: node data
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *a, *b, *c;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	a = *head;
	b = NULL;

	for (i = 0; i < idx; i += 1)
	{
		if (a == NULL)
			return (NULL);
		b = a;
		a = a->next;
	}

	c = malloc(sizeof(listint_t));
	if (!c)
		return (NULL);
	c->n = n;
	c->next = a;

	if (idx == 0)
		*head = c;
	else
		b->next = c;

	return (c);
}
