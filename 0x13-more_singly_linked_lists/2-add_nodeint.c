#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * *add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: head of linked list
 * @n: node data
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_new;

	if (head == NULL)
		return (NULL);
	node_new = malloc(sizeof(listint_t));
	if (!node_new)
		return (NULL);
	node_new->n = n;
	node_new->next = *head;
	*head = node_new;

	return (*head);
}
