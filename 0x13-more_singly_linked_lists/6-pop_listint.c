#include "lists.h"

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

	if (!head || !*head)
		return (0);

	node_data = (*head)->n;
	p = *head;
	*head = (*head)->next;
	free(p);

	return (node_data);
}
