#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * listint_len - returns num of elements in a linked listint_t list
 * @h: head of linked list
 * Return: number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	size_t i;
	const listint_t *p;

	i = 0;
	p = h;

	while (p != NULL)
	{
		p = p->next;
		i += 1;
	}

	return (i);
}
