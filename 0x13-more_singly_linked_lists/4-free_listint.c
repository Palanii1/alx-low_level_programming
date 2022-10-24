#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * free_listint - frees a listint_t list
 * @head: head of linked list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
