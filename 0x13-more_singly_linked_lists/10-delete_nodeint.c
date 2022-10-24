#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node at index 
 * of a listint_t linked list
 * @head: pointer to pointer
 * @index: index of the node that should be deleted. starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_ptr, *next_ptr;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	next_ptr = *head;
	prev_ptr = NULL;

	if (index == 0)
	{
		*head = (*head)->next;
		free(next_ptr);
		return (1);
	}
	for (i = 0; i < index; i += 1)
	{
		if (next_ptr == NULL)
			return (-1);
		prev_ptr = next_ptr;
		next_ptr = next_ptr->next;
	}
	if (prev_ptr)
		prev_ptr->next = next_ptr->next;
	free(next_ptr);

	return (1);
}
