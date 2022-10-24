#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: head of linked list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *p;

	p = h;
	i = 0;

	while (p != NULL)
	{
		printf("%i\n", p->n);
		i += 1;
		p = p->next;
	}

	return (i);
}
