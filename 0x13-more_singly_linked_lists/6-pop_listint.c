#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer
 * @n: head node data
 * Return: n or 0, if list empty
 */

int pop_listint(listint_t **head)
{
	int node_data;
	listint_t *p;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	node_data = 0;
	p = *head;
	node_data = (*head)->n;
	*head = (*head)->next;
	free(p);

	return (node_data);
}
