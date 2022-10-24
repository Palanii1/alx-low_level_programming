#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to a pointer
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *p;

	if (head != NULL)
	{
		p = *head;
		while ((ptr = p) != NULL)
		{
			p = p->next;
			free(ptr);
		}
		*head = NULL;
	}
}
