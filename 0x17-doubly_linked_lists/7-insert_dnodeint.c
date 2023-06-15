#include "lists.h"

/**
 *insert_dnodeint_at_index - insert a node at the index
 *@h: the head of the node
 *@idx: the index of the node
 *@n: the data of the node
 *Return: The node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *tmp = *h;
dlistint_t *new = malloc(sizeof(dlistint_t));

if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = *h;
*h = new;
return (new);
}
while (tmp != NULL)
{
if (i == idx - 1)
{
new->next = tmp->next;
tmp->next = new;
return (new);
}
tmp = tmp->next;
i++;
}
return (NULL);
}
