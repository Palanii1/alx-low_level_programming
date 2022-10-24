#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head of linked list
 * @n: list data
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *next_ptr;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	next_ptr = *head;

	while (next_ptr->next != NULL)
		next_ptr = next_ptr->next;
	next_ptr->next = new_node;

	return (new_node);
}
