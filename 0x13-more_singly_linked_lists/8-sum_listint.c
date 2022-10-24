#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n) of 
 * a listint_t linked list
 * @head: head of linked list
 * Return: sum of all the data (n) of the list
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *p;

	if (!head)
		return (0);

	p = head;
	sum = 0;

	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}

	return (sum);
}
