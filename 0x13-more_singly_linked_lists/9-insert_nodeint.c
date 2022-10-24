#include "lists.h"

/**
 * *insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer
 * @idx: index of list where node will be added. starts at 0
 * @n: node data
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *temp = *head;
size_t i = 0;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = NULL;

if (!*head && !idx)
{
*head = new;
return (new);
}

else if (!*head && idx)
return (NULL);

else if (!idx)
{
new->next = temp;
*head = new;
return (new);
}

while (i < (idx - 1))
{
temp = temp->next;
i++;
}
new->next = temp->next;
temp->next = new;

return (new);
}
